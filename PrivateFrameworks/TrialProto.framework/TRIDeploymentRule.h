
@interface TRIDeploymentRule : TRIPBMessage

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *predicateArray;
@property (nonatomic, readonly) unsigned long long predicateArray_Count;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
