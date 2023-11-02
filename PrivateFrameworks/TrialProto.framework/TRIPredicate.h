
@interface TRIPredicate : TRIPBMessage

@property (nonatomic) bool hasOperation;
@property (nonatomic) bool hasSystemVariable;
@property (nonatomic, retain) NSMutableArray *operandArray;
@property (nonatomic, readonly) unsigned long long operandArray_Count;
@property (nonatomic) int operation;
@property (nonatomic) int systemVariable;

+ (id)descriptor;

@end
