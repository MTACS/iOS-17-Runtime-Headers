
@interface PKDownloadRemoteAssetConfiguration : NSObject <NSCopying> {
    <PKCloudStoreCoordinatorDelegate> * _cloudStoreCoordinatorDelegate;
    bool  _ignoreRequiredAssetDownloadFailures;
    double  _screenScale;
    NSArray * _seids;
    NSString * _suffix;
}

@property (nonatomic, retain) <PKCloudStoreCoordinatorDelegate> *cloudStoreCoordinatorDelegate;
@property (nonatomic) bool ignoreRequiredAssetDownloadFailures;
@property (nonatomic) double screenScale;
@property (nonatomic, retain) NSArray *seids;
@property (nonatomic, retain) NSString *suffix;

+ (id)configurationWithCloudStoreDelegate:(id)arg1;
+ (id)configurationWithCloudStoreDelegate:(id)arg1 seids:(id)arg2;
+ (id)configurationWithSEIDs:(id)arg1;

- (void).cxx_destruct;
- (id)cloudStoreCoordinatorDelegate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)ignoreRequiredAssetDownloadFailures;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDownloadRemoteAssetConfiguration:(id)arg1;
- (double)screenScale;
- (id)seids;
- (void)setCloudStoreCoordinatorDelegate:(id)arg1;
- (void)setIgnoreRequiredAssetDownloadFailures:(bool)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSeids:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;

@end
