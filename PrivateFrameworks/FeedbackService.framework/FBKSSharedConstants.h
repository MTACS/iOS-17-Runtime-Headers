
@interface FBKSSharedConstants : NSObject

+ (void)_deriveSystemVersion;
+ (id)appleSeedURL;
+ (id)appleSeedURLFromDefaults:(id)arg1 withEnvironment:(short)arg2;
+ (short)environment;
+ (void)initialize;
+ (void)overrideEnvironment:(short)arg1 host:(id)arg2;
+ (id)overrideGeoCountryCode;
+ (long long)platform;
+ (id)productVersion;
+ (id)sharedUserDefaults;
+ (id)swTrain;
+ (id)swVers;

@end
