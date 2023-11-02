
@interface SDSeedProgramMigrator : NSObject

+ (bool)_enrollInSeedProgram:(long long)arg1;
+ (bool)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (bool)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end
