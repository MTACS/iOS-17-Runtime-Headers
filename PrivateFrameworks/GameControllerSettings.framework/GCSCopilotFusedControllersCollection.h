
@interface GCSCopilotFusedControllersCollection : NSObject <GCSCopilotFusedControllers> {
    <GCSSettingsStoreService> * _settingsStore;
    <GCUserDefaults> * _userDefaults;
    NSArray * _values;
}

@property (nonatomic, readonly) <GCSSettingsStoreService> *settingsStore;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (id)_unitTest_fusePilotController:(id)arg1 withCopilot:(id)arg2;
- (void)_unitTest_saveCopilotFusedControllers:(id)arg1;
- (void)_unitTest_unfuseCopilotFusedController:(id)arg1;
- (id)copilotFusedControllerForControllerIdentifier:(id)arg1;
- (id)copilotFusedControllerForCopilotControllerIdentifier:(id)arg1;
- (id)copilotFusedControllerForFusedControllerIdentifier:(id)arg1;
- (id)copilotFusedControllerForPilotControllerIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsStore:(id)arg1 userDefaults:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValues:(id)arg1;
- (id)settingsStore;
- (bool)storeVersionIsCompatible;
- (void)updateCopilotFusedControllers:(id)arg1;
- (id)values;

@end
