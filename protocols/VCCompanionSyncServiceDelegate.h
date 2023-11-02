
@protocol VCCompanionSyncServiceDelegate

@required

- (void)companionSyncService:(VCCompanionSyncService *)arg1 didFinishSyncSession:(VCCompanionSyncSession *)arg2 withError:(NSError *)arg3;
- (void)companionSyncService:(VCCompanionSyncService *)arg1 didRejectSessionWithError:(NSError *)arg2;
- (void)companionSyncService:(VCCompanionSyncService *)arg1 outgoingSyncSession:(VCCompanionSyncOutgoingSession *)arg2 didUpdateProgress:(double)arg3;
- (void)companionSyncService:(VCCompanionSyncService *)arg1 outgoingSyncSessionDidFinishSendingChanges:(VCCompanionSyncOutgoingSession *)arg2;
- (long long)companionSyncService:(VCCompanionSyncService *)arg1 typeForSession:(VCCompanionSyncSession *)arg2;
- (bool)companionSyncServiceShouldStartSession:(VCCompanionSyncService *)arg1;

@end
