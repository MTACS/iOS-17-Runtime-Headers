
@protocol VGDataCoordinatorDelegate

@required

- (void)dataCoordinator:(VGDataCoordinator *)arg1 didUpdateUnpairedVehicles:(NSArray *)arg2;
- (void)dataCoordinator:(VGDataCoordinator *)arg1 wantsToUpdateVehicle:(VGVehicle *)arg2 syncAcrossDevices:(bool)arg3;
- (void)dataCoordinatorDidUpdateInstalledApps:(VGDataCoordinator *)arg1;
- (VGVehicle *)selectedVehicle;
- (NSArray *)vehicles;

@end
