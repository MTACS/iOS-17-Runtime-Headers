
@interface BCCloudCollectionsManager : NSObject <BDSCloudKitSupportSignOut> {
    BCCloudChangeTokenController * _changeTokenController;
    BCCloudDataSource * _collectionDataSource;
    NSObject<BCCloudCollectionDetailManager> * _collectionDetailManager;
    NSObject<BCCloudCollectionMemberManager> * _collectionMemberManager;
    NSManagedObjectModel * _objectModel;
    bool  _proxyMode;
    BDSSaltVersionIdentifierManager * _saltVersionIdentifierManager;
    BDSServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) BCCloudChangeTokenController *changeTokenController;
@property (nonatomic, retain) BCCloudDataSource *collectionDataSource;
@property (nonatomic, retain) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager;
@property (nonatomic, retain) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic, retain) NSManagedObjectModel *objectModel;
@property (nonatomic) bool proxyMode;
@property (nonatomic, retain) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;

+ (id)sharedClientXPCProxy;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)changeTokenController;
- (id)collectionDataSource;
- (id)collectionDetailManager;
- (id)collectionMemberManager;
- (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (id)initClientXPCProxy;
- (id)objectModel;
- (bool)proxyMode;
- (id)saltVersionIdentifierManager;
- (id)serviceProxy;
- (void)setChangeTokenController:(id)arg1;
- (void)setCollectionDataSource:(id)arg1;
- (void)setCollectionDetailManager:(id)arg1;
- (void)setCollectionMemberManager:(id)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setProxyMode:(bool)arg1;
- (void)setSaltVersionIdentifierManager:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
