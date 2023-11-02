
@protocol WPDClientProtocol <NSObject>

@optional

- (void)advertisingFailedToStart:(NSError *)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStartedOfTypeAt:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(NSError *)arg2;
- (void)anyDiscoveredDevice:(NSDictionary *)arg1;
- (void)central:(NSUUID *)arg1 subscribed:(bool)arg2 toCharacteristic:(NSString *)arg3 inService:(NSString *)arg4;
- (void)connectedDevice:(NSUUID *)arg1 withError:(NSError *)arg2 shouldDiscover:(bool)arg3;
- (void)connectedDeviceOverLEPipe:(NSUUID *)arg1;
- (WPDConnection *)connectionForUUID:(NSUUID *)arg1;
- (void)createdConnection:(WPDConnection *)arg1;
- (void)disconnectFromPeer:(NSUUID *)arg1;
- (void)disconnectedDeviceOverLEPipe:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)disconnectedPeer:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)discoveredCharacteristicsAndServices:(NSDictionary *)arg1 forPeripheral:(NSUUID *)arg2;
- (void)discoveredDevice:(NSDictionary *)arg1;
- (void)discoveredDevices:(NSArray *)arg1;
- (void)enteredZone:(NSData *)arg1 manufacturerData:(NSData *)arg2;
- (void)exitedZone:(NSData *)arg1;
- (void)foundPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (CBPeripheralManager *)getManager;
- (void)lostPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)notifyClientStateChange:(long long)arg1 Restricted:(bool)arg2;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)readyForDataTransfer;
- (void)receivedData:(NSData *)arg1 fromCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 forPeripheral:(NSUUID *)arg4;
- (void)receivedData:(NSData *)arg1 fromEndpoint:(NSString *)arg2 forPeripheral:(NSUUID *)arg3;
- (void)receivedTestResponse:(NSDictionary *)arg1;
- (void)resetConnection;
- (void)sentData:(NSData *)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 forPeripheral:(NSUUID *)arg4 withError:(NSError *)arg5;
- (void)sentData:(NSData *)arg1 toEndpoint:(NSString *)arg2 forPeripheral:(NSUUID *)arg3 withError:(NSError *)arg4;
- (void)stoppedTrackingPeer:(NSUUID *)arg1 ofType:(unsigned char)arg2;
- (void)updatedNotificationState:(bool)arg1 forCharacteristic:(NSString *)arg2 inService:(NSString *)arg3 withPeripheral:(NSUUID *)arg4;
- (NSXPCConnection *)xpcConnectionForClient;

@end
