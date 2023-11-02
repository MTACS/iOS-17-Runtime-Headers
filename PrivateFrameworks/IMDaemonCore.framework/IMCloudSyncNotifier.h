
@interface IMCloudSyncNotifier : NSObject <SyncNotifying>

- (void)notifyClientsOfProgress:(id)arg1;
- (void)notifyClientsOfState:(id)arg1;

@end
