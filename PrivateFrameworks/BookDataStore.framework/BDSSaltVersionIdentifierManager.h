
@interface BDSSaltVersionIdentifierManager : NSObject <BCCloudKitDatabaseZoneObserver> {
    BCCloudChangeTokenController * _tokenController;
    NSObject<BDSCloudKitSupportZoneRecovery> * _zoneDataManager;
    NSString * _zoneName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BCCloudChangeTokenController *tokenController;
@property (nonatomic) NSObject<BDSCloudKitSupportZoneRecovery> *zoneDataManager;
@property (nonatomic, copy) NSString *zoneName;

- (void).cxx_destruct;
- (void)databaseController:(id)arg1 saltVersionIdentifierChanged:(id)arg2 completion:(id /* block */)arg3;
- (id)description;
- (void)handleSaltVersionIdentifierChange:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithZoneDataManager:(id)arg1 tokenController:(id)arg2 databaseController:(id)arg3;
- (void)setTokenController:(id)arg1;
- (void)setZoneDataManager:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)tokenController;
- (id)zoneDataManager;
- (id)zoneName;

@end
