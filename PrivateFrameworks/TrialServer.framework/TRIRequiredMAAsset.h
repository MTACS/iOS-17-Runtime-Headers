
@interface TRIRequiredMAAsset : NSObject <NSCopying> {
    NSString * _factorName;
    TRIFullMAAssetId * _fullAssetId;
    bool  _isInstalled;
    bool  _isOnDemand;
    TRIMAAssetMetadata * _metadata;
}

@property (nonatomic, readonly) NSString *factorName;
@property (nonatomic, readonly) TRIFullMAAssetId *fullAssetId;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isOnDemand;
@property (nonatomic, readonly) TRIMAAssetMetadata *metadata;

+ (id)assetWithFactorName:(id)arg1 isInstalled:(bool)arg2 isOnDemand:(bool)arg3 metadata:(id)arg4 fullAssetId:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithReplacementFactorName:(id)arg1;
- (id)copyWithReplacementFullAssetId:(id)arg1;
- (id)copyWithReplacementIsInstalled:(bool)arg1;
- (id)copyWithReplacementIsOnDemand:(bool)arg1;
- (id)copyWithReplacementMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorName;
- (id)fullAssetId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFactorName:(id)arg1 isInstalled:(bool)arg2 isOnDemand:(bool)arg3 metadata:(id)arg4 fullAssetId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAsset:(id)arg1;
- (bool)isInstalled;
- (bool)isOnDemand;
- (id)metadata;

@end
