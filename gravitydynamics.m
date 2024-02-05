   % Define altitude range in meters
altitude = linspace(0, 100000, 100000);

% Calculate corresponding gravitational acceleration values
g = 6.6743*(10^-11)*5.972*(10^24);
gravity = g./(6.378*(10^6)+altitude).^2;

% Plot gravitational acceleration versus altitude
plot(altitude, gravity);

% Add labels and title
xlabel('Altitude (m)');
ylabel('Gravitational Acceleration (m/s^2)');
title('Earth Gravitational Acceleration vs Altitude');