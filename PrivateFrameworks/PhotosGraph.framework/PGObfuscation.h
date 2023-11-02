
@interface PGObfuscation : NSObject

+ (id)obfuscatedStringFromPlaintextDate:(id)arg1 usingDateFormatter:(id)arg2;
+ (id)obfuscatedStringFromPlaintextNumber:(id)arg1;
+ (id)obfuscatedStringFromPlaintextString:(id)arg1;
+ (id)plaintextDateFromObfuscatedString:(id)arg1 usingDateFormatter:(id)arg2;
+ (id)plaintextNumberFromObfuscatedString:(id)arg1;
+ (id)plaintextStringFromObfuscatedString:(id)arg1;

@end
