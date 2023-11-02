
@interface TRIRolloutAssignmentLanguage : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *assignmentArray;
@property (nonatomic, readonly) unsigned long long assignmentArray_Count;

+ (id)descriptor;

@end
