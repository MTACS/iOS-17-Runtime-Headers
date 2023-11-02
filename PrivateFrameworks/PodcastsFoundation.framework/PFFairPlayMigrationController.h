
@interface PFFairPlayMigrationController : NSObject {
    void fairPlayEpisodeDataFetcher;
    void internalQueue;
    void invalidationManager;
    void legacyDownloadRenewalManager;
    void metadataLoader;
    void secureKeyRequestStorage;
    void validationManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)migrateIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)rollbackIfNecessaryWithCompletion:(id /* block */)arg1;

@end
