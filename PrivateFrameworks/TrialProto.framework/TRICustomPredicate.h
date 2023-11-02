
@interface TRICustomPredicate : TRIPBMessage

@property (nonatomic) bool hasKey;
@property (nonatomic) bool hasKeyType;
@property (nonatomic) bool hasOperation;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) int keyType;
@property (nonatomic, retain) NSMutableArray *operandArray;
@property (nonatomic, readonly) unsigned long long operandArray_Count;
@property (nonatomic) int operation;

+ (id)descriptor;

@end
