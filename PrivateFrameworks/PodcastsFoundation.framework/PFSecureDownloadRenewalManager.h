
@interface PFSecureDownloadRenewalManager : NSObject {
    MTSecureDownloadRenewalManager * _manager;
}

+ (id)inContextKeyDataFor:(long long)arg1 ctx:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURLProtocolDelegate:(id)arg1;
- (void)requestSecureDeletionOfEpisodeWithAdamID:(long long)arg1;
- (void)requestSecureDeletionOfOrphanedKeys;
- (void)updateDRMKeysForDownloads;
- (void)willEnterForeground;

@end
