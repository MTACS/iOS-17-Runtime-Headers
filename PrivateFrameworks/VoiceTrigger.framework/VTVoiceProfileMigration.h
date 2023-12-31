
@interface VTVoiceProfileMigration : NSObject

+ (bool)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;
+ (unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1;
+ (bool)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;
+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1;

@end
