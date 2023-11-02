
@interface MTSecureDownloadRenewalManager : NSObject {
    void $__lazy_storage_$_secureKeyLoader;
    void analyticsChannel;
    void bugReporter;
    void delegate;
    void metadataLoader;
    void removalLock;
    void renewalLock;
}

+ (id)inContextKeyDataFor:(long long)arg1 ctx:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)requestSecureDeletionOf:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSecureDeletionOfOrphanedKeysWithCompletionHandler:(id /* block */)arg1;
- (void)requestSecureDeletionOfStoreTrackIds:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDRMKeysForDownloads;
- (void)updateDRMKeysForDownloadsWithUrlProtocolDelegate:(id)arg1 completionHandler:(id /* block */)arg2;

@end
