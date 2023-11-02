
@interface PFFairPlayValidationManager : NSObject <PFFairPlayValidationManaging> {
    void $__lazy_storage_$_logPrefix;
    void episodeFetcher;
    void episodeRemovalManager;
    void internalQueue;
    void keyLoader;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithEpisodeRemovalManager:(id)arg1;
- (void)validateDownloadedEpisodesWithCompletion:(id /* block */)arg1;

@end
