
@interface TIKeyEventMap_zh_Stroke : TIKeyEventMap_zh

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (bool)isNumericWubi:(id)arg1;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (id)wubiFromASCII:(id)arg1;

@end