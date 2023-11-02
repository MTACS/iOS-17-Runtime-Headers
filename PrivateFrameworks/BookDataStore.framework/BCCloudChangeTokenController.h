
@interface BCCloudChangeTokenController : NSObject <BCCloudKitChangeTokenStore> {
    BCCloudKitController * _cloudKitController;
    bool  _enableCloudSync;
    NSManagedObjectContext * _moc;
    NSString * _zoneName;
}

@property (nonatomic) BCCloudKitController *cloudKitController;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic) NSManagedObjectContext *moc;
@property (nonatomic, copy) NSString *zoneName;

- (void).cxx_destruct;
- (id)cloudKitController;
- (bool)cloudSyncEnabled;
- (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (bool)enableCloudSync;
- (id)initWithMOC:(id)arg1 zoneName:(id)arg2 cloudKitController:(id)arg3;
- (id)moc;
- (void)serverChangeTokenWithCompletion:(id /* block */)arg1;
- (void)setCloudKitController:(id)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setMoc:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)storeServerChangeToken:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSaltVersionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)zoneName;
- (void)zoneNeedsUpdate:(id)arg1 completion:(id /* block */)arg2;

@end
