
@interface CKVGlobalInfoLog : NSObject {
    KVDictionaryLog * _log;
}

- (void).cxx_destruct;
- (id)dictationLanguageCodes;
- (unsigned char)enablementOptions;
- (id)initWithRootDirectory:(id)arg1;
- (id)lastMigration;
- (id)migratedBuildVersion;
- (id)migratedProjectVersion;
- (id)migrationAttempts;
- (bool)recordMigrationAttempt;
- (bool)recordMigrationWithBuildVersion:(id)arg1 projectVersion:(id)arg2 enablementOptions:(unsigned char)arg3 siriLanguageCode:(id)arg4 dictationLanguageCodes:(id)arg5;
- (id)schemaVersion;
- (id)siriLanguageCode;
- (bool)updateEnablementOptions:(unsigned char)arg1;
- (bool)updateSchemaVersion:(id)arg1;
- (bool)updateSiriLanguageCode:(id)arg1 dictationLanguageCodes:(id)arg2;

@end
