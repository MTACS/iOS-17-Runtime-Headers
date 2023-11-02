
@protocol VCSyncDataHandling <VCOutgoingSyncDataHandling, VCIncomingSyncDataHandling>

@required

- (void)deregisterSyncService:(id <VCShortcutSyncService>)arg1;
- (void)registerSyncService:(id <VCShortcutSyncService>)arg1;

@end
