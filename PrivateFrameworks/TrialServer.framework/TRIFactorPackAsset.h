
@interface TRIFactorPackAsset : NSObject <NSCopying> {
    NSString<TRIAssetId> * _assetId;
    NSString * _factorName;
    NSString<TRIFactorPackId> * _factorPackId;
    NSString * _filePath;
}

@property (nonatomic, readonly) NSString<TRIAssetId> *assetId;
@property (nonatomic, readonly) NSString *factorName;
@property (nonatomic, readonly) NSString<TRIFactorPackId> *factorPackId;
@property (nonatomic, readonly) NSString *filePath;

+ (id)assetWithFactorName:(id)arg1 assetId:(id)arg2 filePath:(id)arg3 factorPackId:(id)arg4;

- (void).cxx_destruct;
- (id)assetId;
- (id)copyWithReplacementAssetId:(id)arg1;
- (id)copyWithReplacementFactorName:(id)arg1;
- (id)copyWithReplacementFactorPackId:(id)arg1;
- (id)copyWithReplacementFilePath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorName;
- (id)factorPackId;
- (id)filePath;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFactorName:(id)arg1 assetId:(id)arg2 filePath:(id)arg3 factorPackId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAsset:(id)arg1;

@end
