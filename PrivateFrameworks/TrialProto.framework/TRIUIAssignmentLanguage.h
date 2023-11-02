
@interface TRIUIAssignmentLanguage : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *assignmentArray;
@property (nonatomic, readonly) unsigned long long assignmentArray_Count;
@property (nonatomic) bool hasPreservePopulationDistribution;
@property (nonatomic, retain) NSMutableArray *predicateArray;
@property (nonatomic, readonly) unsigned long long predicateArray_Count;
@property (nonatomic) bool preservePopulationDistribution;

+ (id)descriptor;

@end
