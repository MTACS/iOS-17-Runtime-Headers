
@interface TRIFetchOnDemandFactorsPersistedTask_FactorPackAssetIds : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *assetIdArray;
@property (nonatomic, readonly) unsigned long long assetIdArray_Count;
@property (nonatomic, retain) NSMutableArray *assetIdFactorNameArray;
@property (nonatomic, readonly) unsigned long long assetIdFactorNameArray_Count;
@property (nonatomic, copy) NSString *factorPackId;
@property (nonatomic) bool hasFactorPackId;

+ (id)descriptor;

@end
