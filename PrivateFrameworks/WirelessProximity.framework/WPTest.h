
@interface WPTest : WPClient {
    <WPTestDelegate> * _delegate;
    NSMutableDictionary * _transfers;
}

@property (nonatomic) <WPTestDelegate> *delegate;
@property (retain) NSMutableDictionary *transfers;

+ (long long)holdVouchers;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
- (void)central:(id)arg1 subscribed:(bool)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (id)clientAsString;
- (void)connectToPeer:(id)arg1 withOptions:(id)arg2;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(bool)arg3;
- (void)connectedDeviceOverLEPipe:(id)arg1;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)disconnectFromPeer:(id)arg1;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setTransfers:(id)arg1;
- (void)startAdvertisingOfType:(unsigned char)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5;
- (void)startScanningForType:(unsigned char)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(bool)arg7 scanCache:(bool)arg8;
- (void)stateDidChange:(long long)arg1;
- (void)stopAdvertisingOfType:(unsigned char)arg1;
- (void)stopScanningForType:(unsigned char)arg1;
- (id)transfers;

@end
