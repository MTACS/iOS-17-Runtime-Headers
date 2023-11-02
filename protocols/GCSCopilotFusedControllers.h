
@protocol GCSCopilotFusedControllers

@required

- (NSString *)_unitTest_fusePilotController:(NSString *)arg1 withCopilot:(NSString *)arg2;
- (void)_unitTest_unfuseCopilotFusedController:(NSString *)arg1;
- (void)addObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (GCSCopilotFusedController *)copilotFusedControllerForControllerIdentifier:(NSString *)arg1;
- (GCSCopilotFusedController *)copilotFusedControllerForCopilotControllerIdentifier:(NSString *)arg1;
- (GCSCopilotFusedController *)copilotFusedControllerForFusedControllerIdentifier:(NSString *)arg1;
- (GCSCopilotFusedController *)copilotFusedControllerForPilotControllerIdentifier:(NSString *)arg1;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 context:(void*)arg3;
- (<GCSSettingsStoreService> *)settingsStore;
- (bool)storeVersionIsCompatible;
- (NSArray *)values;

@end
