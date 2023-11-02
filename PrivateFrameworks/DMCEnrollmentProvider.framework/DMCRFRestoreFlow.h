
@interface DMCRFRestoreFlow : NSObject {
    id /* block */  _completion;
    <DMCRFDeviceEnvironment> * _deviceEnvironment;
    <DMCRFInteractionClient> * _interactionClient;
    <DMCRFSnapshotSource> * _snapshotSource;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) <DMCRFDeviceEnvironment> *deviceEnvironment;
@property (nonatomic, retain) <DMCRFInteractionClient> *interactionClient;
@property (nonatomic, retain) <DMCRFSnapshotSource> *snapshotSource;

+ (id)_intersectionOfSet:(id)arg1 set:(id)arg2;

- (void).cxx_destruct;
- (id)_appBundleIdentifiersSetDebugDescription:(id)arg1;
- (void)_checkSnapshotForConflictingApps:(id)arg1;
- (void)_compareAppsOnDeviceToAppBundleIdentifiers:(id)arg1 fromSnapshot:(id)arg2;
- (void)_handleSnapshots:(id)arg1;
- (void)_restoreSnapshot:(id)arg1 skippingApps:(id)arg2;
- (void)_restoreSnapshotNoConflicts:(id)arg1;
- (id /* block */)completion;
- (id)deviceEnvironment;
- (id)initWithSnapshotSource:(id)arg1 interactionClient:(id)arg2 deviceEnvironment:(id)arg3 completion:(id /* block */)arg4;
- (id)interactionClient;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDeviceEnvironment:(id)arg1;
- (void)setInteractionClient:(id)arg1;
- (void)setSnapshotSource:(id)arg1;
- (id)snapshotSource;
- (void)startManagedRestoreWorkflow;

@end
