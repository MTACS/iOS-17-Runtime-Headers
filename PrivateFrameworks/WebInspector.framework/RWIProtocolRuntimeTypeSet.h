
@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (nonatomic) bool isBigInt;
@property (nonatomic) bool isBoolean;
@property (nonatomic) bool isFunction;
@property (nonatomic) bool isInteger;
@property (nonatomic) bool isNull;
@property (nonatomic) bool isNumber;
@property (nonatomic) bool isObject;
@property (nonatomic) bool isString;
@property (nonatomic) bool isSymbol;
@property (nonatomic) bool isUndefined;

- (id)initWithIsFunction:(bool)arg1 isUndefined:(bool)arg2 isNull:(bool)arg3 isBoolean:(bool)arg4 isInteger:(bool)arg5 isNumber:(bool)arg6 isString:(bool)arg7 isObject:(bool)arg8 isSymbol:(bool)arg9 isBigInt:(bool)arg10;
- (bool)isBigInt;
- (bool)isBoolean;
- (bool)isFunction;
- (bool)isInteger;
- (bool)isNull;
- (bool)isNumber;
- (bool)isObject;
- (bool)isString;
- (bool)isSymbol;
- (bool)isUndefined;
- (void)setIsBigInt:(bool)arg1;
- (void)setIsBoolean:(bool)arg1;
- (void)setIsFunction:(bool)arg1;
- (void)setIsInteger:(bool)arg1;
- (void)setIsNull:(bool)arg1;
- (void)setIsNumber:(bool)arg1;
- (void)setIsObject:(bool)arg1;
- (void)setIsString:(bool)arg1;
- (void)setIsSymbol:(bool)arg1;
- (void)setIsUndefined:(bool)arg1;

@end
