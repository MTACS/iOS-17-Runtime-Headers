
@interface TRIPBEnumOptions : TRIPBMessage

@property (nonatomic) bool allowAlias;
@property (nonatomic) bool deprecated;
@property (nonatomic) bool hasAllowAlias;
@property (nonatomic) bool hasDeprecated;
@property (nonatomic, retain) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
