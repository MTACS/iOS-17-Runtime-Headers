
@protocol MNVehicleMonitorDelegate <NSObject>

@optional

- (void)vehicleMonitorDidConnectToVehicle:(MNVehicleMonitor *)arg1;
- (void)vehicleMonitorDidDisconnectFromVehicle:(MNVehicleMonitor *)arg1;

@end
