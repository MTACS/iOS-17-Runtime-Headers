
@interface VNVersionParser : NSObject

+ (bool)_isSeparatedString:(id)arg1 equalToString:(id)arg2 atIndex:(unsigned long long)arg3 usingSeparator:(id)arg4;
+ (bool)isMajorVersion:(id)arg1 equalToMajorVersion:(id)arg2;
+ (bool)isMinorVersion:(id)arg1 equalToMinorVersion:(id)arg2;

@end
