
@interface DDURLifier : NSObject

+ (bool)urlIfyNode:(id)arg1;
+ (bool)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner { }*)arg2 phoneNumberTypes:(unsigned long long)arg3;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner { }*)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5;
+ (bool)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3;
+ (id)urlMatchesForString:(id)arg1;
+ (id)urlMatchesForString:(id)arg1 includingTel:(bool)arg2;
+ (id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (id)urlMatchesForString:(id)arg1 usingScanner:(struct __DDScanner { }*)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6;

@end
