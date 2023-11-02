
@interface ISRootMigrator : ISMigrator {
    bool  _isErase;
    bool  _isRestoreFromBackup;
}

@property (nonatomic) bool isErase;
@property (nonatomic) bool isRestoreFromBackup;

- (id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2;
- (id)importPreferredLanguagesForPreferences:(id)arg1;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1;
- (bool)isErase;
- (bool)isRestoreFromBackup;
- (bool)performMigration;
- (id)performMigrationForPreferences:(id)arg1;
- (id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2;
- (void)setIsErase:(bool)arg1;
- (void)setIsRestoreFromBackup:(bool)arg1;
- (void)updateAppleLanguagesSchemaVersionToCurrent;

@end
