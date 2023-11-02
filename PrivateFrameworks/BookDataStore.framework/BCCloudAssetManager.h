
@interface BCCloudAssetManager : NSObject <BDSCloudKitSupportSignOut> {
    BCCloudAssetAnnotationManager * _assetAnnotationManager;
    BCCloudDataSource * _assetDataSource;
    NSObject<BCCloudAssetDetailManager> * _assetDetailManager;
    NSObject<BCCloudAssetReviewManager> * _assetReviewManager;
    BCCloudChangeTokenController * _changeTokenController;
    NSManagedObjectModel * _objectModel;
    bool  _proxyMode;
    NSObject<BCCloudReadingNowDetailManager> * _readingNowDetailManager;
    BDSSaltVersionIdentifierManager * _saltVersionIdentifierManager;
    BDSServiceProxy * _serviceProxy;
    NSObject<BCCloudStoreAssetManager> * _storeAssetManager;
}

@property (nonatomic, retain) BCCloudAssetAnnotationManager *assetAnnotationManager;
@property (nonatomic, retain) BCCloudDataSource *assetDataSource;
@property (nonatomic, retain) NSObject<BCCloudAssetDetailManager> *assetDetailManager;
@property (nonatomic, retain) NSObject<BCCloudAssetReviewManager> *assetReviewManager;
@property (nonatomic, retain) BCCloudChangeTokenController *changeTokenController;
@property (nonatomic, retain) NSManagedObjectModel *objectModel;
@property (nonatomic) bool proxyMode;
@property (nonatomic, retain) NSObject<BCCloudReadingNowDetailManager> *readingNowDetailManager;
@property (nonatomic, retain) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;
@property (nonatomic, retain) NSObject<BCCloudStoreAssetManager> *storeAssetManager;

+ (id)sharedClientXPCProxy;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)assetAnnotationManager;
- (id)assetDataSource;
- (id)assetDetailManager;
- (id)assetReviewManager;
- (id)changeTokenController;
- (void)dealloc;
- (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (id)initClientXPCProxy;
- (id)objectModel;
- (bool)proxyMode;
- (id)readingNowDetailManager;
- (id)saltVersionIdentifierManager;
- (id)serviceProxy;
- (void)setAssetAnnotationManager:(id)arg1;
- (void)setAssetDataSource:(id)arg1;
- (void)setAssetDetailManager:(id)arg1;
- (void)setAssetReviewManager:(id)arg1;
- (void)setChangeTokenController:(id)arg1;
- (void)setEnableCloudSync:(bool)arg1 enableReadingNowSync:(bool)arg2;
- (void)setObjectModel:(id)arg1;
- (void)setProxyMode:(bool)arg1;
- (void)setReadingNowDetailManager:(id)arg1;
- (void)setSaltVersionIdentifierManager:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)setStoreAssetManager:(id)arg1;
- (id)storeAssetManager;

@end
