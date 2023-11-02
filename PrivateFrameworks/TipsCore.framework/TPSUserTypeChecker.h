
@interface TPSUserTypeChecker : NSObject

+ (int)_majorVersionForBuildVersion:(id)arg1;
+ (id)_previousBuildVersion;
+ (long long)userType;
+ (long long)userTypeFromCloudDataWithKey:(id)arg1;
+ (long long)userTypeFromMigratorData;

@end
