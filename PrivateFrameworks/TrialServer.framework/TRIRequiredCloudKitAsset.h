
@interface TRIRequiredCloudKitAsset : NSObject <NSCopying> {
    NSString<TRIAssetId> * _assetId;
    NSString * _factorName;
    bool  _isInstalled;
    bool  _isOnDemand;
    TRICKAssetMetadata * _metadata;
}

@property (nonatomic, readonly) NSString<TRIAssetId> *assetId;
@property (nonatomic, readonly) NSString *factorName;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isOnDemand;
@property (nonatomic, readonly) TRICKAssetMetadata *metadata;

+ (id)assetWithFactorName:(id)arg1 isInstalled:(bool)arg2 isOnDemand:(bool)arg3 assetId:(id)arg4 metadata:(id)arg5;

- (void).cxx_destruct;
- (id)assetId;
- (id)copyWithReplacementAssetId:(id)arg1;
- (id)copyWithReplacementFactorName:(id)arg1;
- (id)copyWithReplacementIsInstalled:(bool)arg1;
- (id)copyWithReplacementIsOnDemand:(bool)arg1;
- (id)copyWithReplacementMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFactorName:(id)arg1 isInstalled:(bool)arg2 isOnDemand:(bool)arg3 assetId:(id)arg4 metadata:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAsset:(id)arg1;
- (bool)isInstalled;
- (bool)isOnDemand;
- (id)metadata;

@end
