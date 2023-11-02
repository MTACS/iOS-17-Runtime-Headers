
@interface TTSAXResourceMigrationUtilities : NSObject {
    AXAssetsService * _assetsService;
    bool  _isMigrationComplete;
    NSDictionary * _obsoleteVoicesWithReplacements;
}

@property (nonatomic, retain) AXAssetsService *assetsService;
@property (nonatomic) bool isMigrationComplete;
@property (nonatomic, retain) NSDictionary *obsoleteVoicesWithReplacements;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_readIsMigrationCompleteFromPreferences;
- (id)_readVoiceIdentifiersToMigrateFromPreferences;
- (id)_remapGenderedSiriVoiceIdentifiers:(id)arg1;
- (id)assetsService;
- (id)convertIdentifierIfNeeded:(id)arg1;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)arg1;
- (void)downloadCompactResourceIfNeededForIdentifier:(id)arg1;
- (id)init;
- (bool)isMigrationComplete;
- (id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)arg1;
- (id)obsoleteVoicesWithReplacements;
- (void)resourceCompletedMigration:(id)arg1;
- (bool)resourceNeedsMigration:(id)arg1;
- (void)restartMigrationIfNeeded;
- (void)setAssetsService:(id)arg1;
- (void)setIsMigrationComplete:(bool)arg1;
- (void)setObsoleteVoicesWithReplacements:(id)arg1;
- (id)updatedIdentifierForLegacyIdentifier:(id)arg1 withLanguageCode:(id)arg2;
- (void)writeIsMigrationCompleteToPreferences:(id)arg1;
- (void)writeVoiceIdentifiersToMigrateToPreferences:(id)arg1;

@end
