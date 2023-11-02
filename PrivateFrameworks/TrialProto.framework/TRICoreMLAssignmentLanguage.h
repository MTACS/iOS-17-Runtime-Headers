
@interface TRICoreMLAssignmentLanguage : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *ruleArray;
@property (nonatomic, readonly) unsigned long long ruleArray_Count;

+ (id)descriptor;

@end
