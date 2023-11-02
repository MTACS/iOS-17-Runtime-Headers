
@interface VCCompanionSyncIncomingSession : VCCompanionSyncSession

+ (long long)direction;

- (void)resetDataStoreForSyncSession:(id)arg1 completion:(id /* block */)arg2;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;

@end
