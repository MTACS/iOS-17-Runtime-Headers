
@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController {
    CKServerChangeToken * _syncToken;
}

@property (nonatomic, retain) CKServerChangeToken *syncToken;

- (void).cxx_destruct;
- (bool)_deviceConditionsAllowsMessageSync;
- (bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(bool)arg1;
- (bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (id)ckUtilities;
- (id)latestSyncToken;
- (void)setLatestSyncToken:(id)arg1;
- (void)setLatestSyncToken:(id)arg1 forSyncType:(id)arg2;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;

@end