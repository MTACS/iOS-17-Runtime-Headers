
@interface BPSIconCachePrivacyHelper : NSObject

+ (id)_naiveHashForString:(id)arg1;
+ (id)_perDeviceSalt;
+ (id)saltedHashForString:(id)arg1;
+ (void)setCachePath:(id)arg1;

@end
