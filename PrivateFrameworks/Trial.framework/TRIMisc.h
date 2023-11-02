
@interface TRIMisc : NSObject

+ (id)bestEffortSymbolicateAddress:(void*)arg1;
+ (bool)convertFromString:(id)arg1 usingBase:(int)arg2 toI64:(long long*)arg3;
+ (bool)convertFromString:(id)arg1 usingBase:(int)arg2 toU64:(unsigned long long*)arg3;
+ (unsigned long long)roundToOneSignificantDigitWithU64:(unsigned long long)arg1;
+ (unsigned long long)unsafeFirstAuthenticationState;

@end
