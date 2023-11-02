
@interface REMColor_Codable : REMColor

- (id)init;
- (id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2;
- (id)initWithHexString:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8;

@end
