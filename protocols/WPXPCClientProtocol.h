
@protocol WPXPCClientProtocol <NSObject>

@required

- (void)registeredWithDaemonAndContinuingSession:(bool)arg1;

@optional

- (void)advertisingFailedToStart:(NSError *)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStartedOfTypeAt:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(NSError *)arg2;
- (void)anyDiscoveredDevice:(NSDictionary *)arg1;
- (void)bandwidthStateUpdated:(NSNumber *)arg1;
- (void)central:(NSUUID *)arg1 subscribed:(bool)arg2 toCharacteristic:(NSString *)arg3 inService:(NSString *)arg4;
- (void)connectedDevice:(NSUUID *)arg1 withError:(NSError *)arg2 shouldDiscover:(bool)arg3;
- (void)connectedDeviceOverLEPipe:(NSUUID *)arg1;
- (void)deviceDiscovered:(NSDictionary *)arg1;
- (void)devicesDiscovered:(NSArray *)arg1;
- (void)disconnectedDevice:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)disconnectedDeviceOverLEPipe:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)discoveredCharacteristicsAndServices:(NSDictionary *)arg1 forPeripheral:(NSUUID *)arg2;
- (void)enteredZone:(NSData *)arg1 manufacturerData:(NSData *)arg2;
- (void)exitedZone:(NSData *)arg1;
- (void)failedToRegisterZones:(NSMutableSet *)arg1 withError:(NSError *)arg2;
- (void)failedToStartTrackingPeer:(WPPeerTrackingRequest *)arg1 error:(NSError *)arg2;
- (void)fetchedCurrentlyTrackedZones:(NSDictionary *)arg1;
- (void)foundPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)lostPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)notifyNotApprovedUseCase:(NSString *)arg1;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)rangingEnabled:(bool)arg1 withError:(NSError *)arg2;
- (void)receivedData:(NSData *)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 forPeripheral:(NSUUID *)arg4;
- (void)receivedData:(NSData *)arg1 fromEndpoint:(NSString *)arg2 forPeripheral:(NSUUID *)arg3;
- (void)receivedTestResponse:(NSDictionary *)arg1;
- (void)scanningFailedToStart:(NSError *)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)sentData:(NSData *)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 forPeripheral:(NSUUID *)arg4 withError:(NSError *)arg5;
- (void)sentData:(NSData *)arg1 toEndpoint:(NSString *)arg2 forPeripheral:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)startedTrackingPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)stoppedTrackingPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)updateAdvertisingRequest:(void *)arg1 withUpdate:(void *)arg2; // needs 2 arg types, found 7: WPAdvertisingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WPAdvertisingRequest *, void*
- (void)updateScanningRequest:(void *)arg1 withUpdate:(void *)arg2; // needs 2 arg types, found 7: WPScanRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WPScanRequest *, void*
- (void)updatedNotificationState:(bool)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 withPeripheral:(NSUUID *)arg4;

@end
