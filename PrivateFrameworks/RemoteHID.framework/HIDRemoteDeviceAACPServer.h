
@interface HIDRemoteDeviceAACPServer : HIDRemoteDeviceServer {
    NSObject<OS_dispatch_queue> * _btQueue;
    TSClockManager * _coreTimeSyncManager;
    NSMutableData * _decodeBuff;
    NSMutableDictionary * _endpointTimeSyncEnabled;
    struct BTAccessoryManagerImpl { } * _manager;
    struct BTSessionImpl { } * _session;
    TSUserFilteredClock * _timeSyncClock;
}

@property (retain) NSObject<OS_dispatch_queue> *btQueue;

- (void).cxx_destruct;
- (void)activate;
- (void)addBTDevice:(struct BTDeviceImpl { }*)arg1;
- (void)btAccessoryEventHandler:(struct BTDeviceImpl { }*)arg1 event:(int)arg2 state:(int)arg3;
- (void)btDeviceMessageHandler:(struct BTDeviceImpl { }*)arg1 type:(int)arg2 data:(char *)arg3 size:(unsigned long long)arg4;
- (id)btQueue;
- (void)btServiceEventHandler:(struct BTDeviceImpl { }*)arg1 services:(unsigned int)arg2 eventType:(int)arg3 event:(unsigned int)arg4 result:(int)arg5;
- (void)btSessionCreate;
- (void)btSessionEventHandler:(struct BTSessionImpl { }*)arg1 event:(int)arg2 result:(int)arg3;
- (void)btSessionInit:(struct BTSessionImpl { }*)arg1;
- (void)cancel;
- (bool)createRemoteDevice:(id)arg1 deviceID:(unsigned long long)arg2 property:(id)arg3;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (int)remoteDeviceGetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4;
- (int)remoteDeviceSetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4;
- (void)removeBTDevice:(struct BTDeviceImpl { }*)arg1;
- (int)sendMessageBTDevice:(struct BTDeviceImpl { }*)arg1 data:(char *)arg2 size:(unsigned long long)arg3 transportVersion:(unsigned char)arg4 side:(unsigned char)arg5;
- (void)setBtQueue:(id)arg1;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateHandler:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (unsigned long long)syncRemoteTimestamp:(unsigned long long)arg1 forEndpoint:(id)arg2;

@end
