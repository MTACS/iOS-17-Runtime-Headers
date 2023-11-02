
@interface TRIAssetIdFactorName : NSObject <NSCopying> {
    NSString<TRIAssetId> * _assetId;
    NSString * _factorName;
}

@property (nonatomic, readonly) NSString<TRIAssetId> *assetId;
@property (nonatomic, readonly) NSString *factorName;

+ (id)nameWithAssetId:(id)arg1 factorName:(id)arg2;

- (void).cxx_destruct;
- (id)assetId;
- (id)copyWithReplacementAssetId:(id)arg1;
- (id)copyWithReplacementFactorName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetId:(id)arg1 factorName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToName:(id)arg1;

@end
