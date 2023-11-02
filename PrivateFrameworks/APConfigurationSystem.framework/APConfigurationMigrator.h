
@interface APConfigurationMigrator : NSObject

+ (void)_removeItemAtPath:(id)arg1 fileManager:(id)arg2;
+ (long long)currentConfigurationVersion;
+ (bool)resetConfigurationSystem;
+ (void)saveConfigurationVersion:(long long)arg1;
+ (long long)traverseDirectoryAtPath:(id)arg1 replacingConfigurationAtPath:(id)arg2;
+ (id)versionNumberFromJSONFileAtPath:(id)arg1;
+ (id)versionNumberFromPlistFileAtPath:(id)arg1;

@end
