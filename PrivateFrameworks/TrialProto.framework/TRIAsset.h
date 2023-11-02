
@interface TRIAsset : TRIPBMessage

@property (nonatomic, copy) NSString *assetId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) unsigned int cloudKitIndex;
@property (nonatomic) bool hasAssetId;
@property (nonatomic) bool hasCloudKitContainer;
@property (nonatomic) bool hasCloudKitIndex;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasSigned_p;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool signed_p;
@property (nonatomic) unsigned long long size;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
