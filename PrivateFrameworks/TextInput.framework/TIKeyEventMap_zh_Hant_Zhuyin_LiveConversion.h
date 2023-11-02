
@interface TIKeyEventMap_zh_Hant_Zhuyin_LiveConversion : TIKeyEventMap_zh_Hant_Zhuyin

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (long long)candidateNumberKey:(int)arg1;
- (bool)shouldInsertZhuyinCharacterAfter:(id)arg1;

@end
