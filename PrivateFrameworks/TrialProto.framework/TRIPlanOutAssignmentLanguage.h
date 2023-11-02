
@interface TRIPlanOutAssignmentLanguage : TRIPBMessage

@property (nonatomic) bool hasYaml;
@property (nonatomic, retain) NSMutableArray *treatmentIdArray;
@property (nonatomic, readonly) unsigned long long treatmentIdArray_Count;
@property (nonatomic, copy) NSString *yaml;

+ (id)descriptor;

@end
