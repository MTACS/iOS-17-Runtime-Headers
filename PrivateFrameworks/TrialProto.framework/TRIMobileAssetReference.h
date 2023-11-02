
@interface TRIMobileAssetReference : TRIPBMessage

@property (nonatomic, copy) NSString *assetSpecifier;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *assetVersion;
@property (nonatomic) bool hasAssetSpecifier;
@property (nonatomic) bool hasAssetType;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasIsFileFactor;
@property (nonatomic) bool hasIsOnDemand;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool isFileFactor;
@property (nonatomic) bool isOnDemand;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long size;

+ (id)descriptor;

@end
