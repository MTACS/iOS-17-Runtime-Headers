
@interface TRIPBMethodOptions : TRIPBMessage

@property (nonatomic) bool deprecated;
@property (nonatomic) bool hasDeprecated;
@property (nonatomic) bool hasIdempotencyLevel;
@property (nonatomic) int idempotencyLevel;
@property (nonatomic, retain) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
