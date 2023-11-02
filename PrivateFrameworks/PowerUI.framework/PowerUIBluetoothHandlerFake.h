
@interface PowerUIBluetoothHandlerFake : PowerUIBluetoothHandler {
    struct BTDeviceImpl { } * _fakeDevice;
    NSString * _fakeDeviceAddress;
    bool  _fakeDeviceConnected;
}

@property (nonatomic) struct BTDeviceImpl { }*fakeDevice;
@property (nonatomic, retain) NSString *fakeDeviceAddress;
@property (nonatomic) bool fakeDeviceConnected;

- (void).cxx_destruct;
- (void)dealloc;
- (int)deviceConnectWrapper:(struct BTDeviceImpl { }*)arg1;
- (struct BTDeviceImpl { }*)fakeDevice;
- (id)fakeDeviceAddress;
- (bool)fakeDeviceConnected;
- (id)getAddressStringForDevice:(struct BTDeviceImpl { }*)arg1;
- (struct BTDeviceImpl { }*)getDeviceForAddressString:(id)arg1 forSession:(struct BTSessionImpl { }*)arg2;
- (int)getDeviceIDWrapperWithDevice:(struct BTDeviceImpl { }*)arg1 withVendorIdSource:(unsigned int*)arg2 withVendorId:(unsigned int*)arg3 withProductId:(unsigned int*)arg4 withVersionId:(unsigned int*)arg5;
- (id)init:(id)arg1;
- (int)isAppleAudioDeviceWrapperWithDevice:(struct BTDeviceImpl { }*)arg1 withBool:(unsigned int*)arg2;
- (bool)isDeviceConnected:(struct BTDeviceImpl { }*)arg1 forSession:(struct BTSessionImpl { }*)arg2;
- (unsigned int)productIDForDevice:(struct BTDeviceImpl { }*)arg1;
- (unsigned char)protocolForDevice:(struct BTDeviceImpl { }*)arg1;
- (int)sendCustomMessageWrapperWithManager:(struct BTAccessoryManagerImpl { }*)arg1 withMessageType:(int)arg2 withDeviceHandle:(struct BTDeviceImpl { }*)arg3 withData:(char *)arg4 withDataSize:(unsigned long long)arg5;
- (void)setFakeDevice:(struct BTDeviceImpl { }*)arg1;
- (void)setFakeDeviceAddress:(id)arg1;
- (void)setFakeDeviceConnected:(bool)arg1;

@end
