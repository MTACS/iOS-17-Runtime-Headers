
@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (bool)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg1;
- (id)punctuationMap;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (bool)shouldInsertZhuyinCharacterAfter:(id)arg1;

@end