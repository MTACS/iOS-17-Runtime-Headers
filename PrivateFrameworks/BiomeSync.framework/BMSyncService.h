
@interface BMSyncService : NSObject <BMSyncServiceClientProtocol>

- (id)cloudKitSyncWithErrors:(id*)arg1;
- (id)connection;
- (id)peerInformationWithError:(id*)arg1;
- (id)rapportSyncWithErrors:(id*)arg1;
- (id)remoteDevicesWithError:(id*)arg1;
- (void)remoteDevicesWithReply:(id /* block */)arg1;
- (bool)triggerCloudKitSyncWithError:(id*)arg1;
- (void)triggerCloudKitSyncWithReply:(id /* block */)arg1;
- (bool)triggerRapportSyncWithDeviceIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)triggerRapportSyncWithError:(id*)arg1;
- (void)triggerRapportSyncWithReply:(id /* block */)arg1;
- (bool)triggerSyncWithError:(id*)arg1;

@end
