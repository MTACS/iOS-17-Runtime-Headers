
@interface TRIPBFieldOptions : TRIPBMessage

@property (nonatomic) int ctype;
@property (nonatomic) bool deprecated;
@property (nonatomic) bool hasCtype;
@property (nonatomic) bool hasDeprecated;
@property (nonatomic) bool hasJstype;
@property (nonatomic) bool hasLazy;
@property (nonatomic) bool hasPacked;
@property (nonatomic) bool hasWeak;
@property (nonatomic) int jstype;
@property (nonatomic) bool lazy;
@property (nonatomic) bool packed;
@property (nonatomic, retain) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;
@property (nonatomic) bool weak;

+ (id)descriptor;

@end
