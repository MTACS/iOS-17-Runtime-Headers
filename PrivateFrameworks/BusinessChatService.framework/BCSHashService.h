
@interface BCSHashService : NSObject

+ (id)SHA256HashForInputString:(id)arg1;
+ (long long)SHA256TruncatedHashForInputString:(id)arg1 includedBytes:(unsigned long long)arg2;
+ (bool)isValidFullHash:(id)arg1;
+ (long long)truncatedHashForFullHash:(id)arg1 includedBytes:(unsigned long long)arg2;

@end
