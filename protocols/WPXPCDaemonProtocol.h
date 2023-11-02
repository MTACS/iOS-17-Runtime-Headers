
@protocol WPXPCDaemonProtocol <NSObject>

@optional

- (void)addCharacteristic:(WPCharacteristic *)arg1 forService:(NSUUID *)arg2;
- (void)checkAllowDuplicates:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)clearDuplicateFilterCache:(WPScanRequest *)arg1;
- (void)connectToPeer:(NSUUID *)arg1;
- (void)connectToPeer:(NSUUID *)arg1 withOptions:(NSDictionary *)arg2;
- (void)disableScanning;
- (void)disconnectFromPeer:(NSUUID *)arg1;
- (void)discoverCharacteristicsAndServices:(NSDictionary *)arg1 forPeripheral:(NSUUID *)arg2;
- (void)dumpDaemonState;
- (void)enableBubbleTestMode;
- (void)enableRanging:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enableTestMode;
- (void)getAllTrackedZones;
- (void)getPowerLogStats:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)isRangingEnabledReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, void*
- (void)listenToBandwidthNotifications;
- (void)overrideAdvTimeout:(double)arg1;
- (void)overrideScanTimeout:(double)arg1;
- (void)registerEndpoint:(NSString *)arg1 requireAck:(bool)arg2 requireEncryption:(bool)arg3;
- (void)registerForAnyScanResults:(bool)arg1;
- (void)registerWithDaemon:(NSString *)arg1 forProcess:(NSString *)arg2 machName:(NSString *)arg3 holdVouchers:(long long)arg4;
- (void)registerWithDaemon:(NSString *)arg1 forProcess:(NSString *)arg2 machName:(NSString *)arg3 shouldHoldVoucherForConnections:(bool)arg4;
- (void)sendDataToCharacteristic:(WPCharacteristic *)arg1 inService:(NSString *)arg2 forPeer:(NSUUID *)arg3;
- (void)sendDatatoLePipe:(NSData *)arg1 forPeer:(NSUUID *)arg2;
- (void)sendTestRequest:(NSDictionary *)arg1;
- (void)shouldSubscribe:(bool)arg1 toPeer:(NSUUID *)arg2 withCharacteristic:(NSString *)arg3 inService:(NSString *)arg4;
- (void)startAdvertising:(WPAdvertisingRequest *)arg1;
- (void)startAdvertising:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: WPAdvertisingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startScanning:(WPScanRequest *)arg1;
- (void)startTrackingPeerWithRequest:(WPPeerTrackingRequest *)arg1;
- (void)startTrackingZone:(WPZoneTrackingRequest *)arg1;
- (void)stopAdvertising:(WPAdvertisingRequest *)arg1;
- (void)stopScanning:(WPScanRequest *)arg1;
- (void)stopTrackingAllZones;
- (void)stopTrackingPeerWithRequest:(WPPeerTrackingRequest *)arg1;
- (void)stopTrackingZones:(NSArray *)arg1;
- (void)unregisterEndpoint:(NSString *)arg1;

@end
