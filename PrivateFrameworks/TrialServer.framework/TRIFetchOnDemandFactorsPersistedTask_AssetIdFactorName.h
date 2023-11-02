
@interface TRIFetchOnDemandFactorsPersistedTask_AssetIdFactorName : TRIPBMessage

@property (nonatomic, copy) NSString *assetId;
@property (nonatomic, copy) NSString *factorName;
@property (nonatomic) bool hasAssetId;
@property (nonatomic) bool hasFactorName;

+ (id)descriptor;

@end
