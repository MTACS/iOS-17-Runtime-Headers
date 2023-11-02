
@interface HIDRemoteDeviceServer : NSObject {
    NSObject<OS_dispatch_queue> * _asyncQueue;
    NSMutableDictionary * _endpoints;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSMutableDictionary *endpoints;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (bool)connectEndpoint:(id)arg1;
- (bool)createRemoteDevice:(id)arg1 deviceID:(unsigned long long)arg2 property:(id)arg3;
- (id)description;
- (void)disconnectAll;
- (void)disconnectEndpoint:(id)arg1;
- (void)endpointMessageHandler:(id)arg1 data:(char *)arg2 size:(unsigned long long)arg3;
- (void)endpointPacketHandler:(id)arg1 packet:(struct { unsigned int x1 : 7; unsigned int x2 : 10; unsigned int x3 : 3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 9; }*)arg2 transportVersion:(unsigned char)arg3 side:(unsigned char)arg4;
- (id)endpoints;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)remoteDeviceConnectHandler:(id)arg1 packet:(struct { struct { unsigned int x_1_1_1 : 7; unsigned int x_1_1_2 : 10; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 9; } x1; unsigned char x2[0]; }*)arg2 transportVersion:(unsigned char)arg3 side:(unsigned char)arg4;
- (int)remoteDeviceGetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4;
- (bool)remoteDeviceGetReportHandler:(id)arg1 packet:(struct { struct { unsigned int x_1_1_1 : 7; unsigned int x_1_1_2 : 10; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 9; } x1; unsigned char x2; unsigned char x3[0]; }*)arg2;
- (bool)remoteDeviceReportHandler:(id)arg1 header:(struct { unsigned int x1 : 7; unsigned int x2 : 10; unsigned int x3 : 3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 9; }*)arg2;
- (bool)remoteDeviceReportHandler:(id)arg1 packet:(struct { struct { unsigned int x_1_1_1 : 7; unsigned int x_1_1_2 : 10; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 9; } x1; unsigned char x2; unsigned char x3[0]; }*)arg2;
- (int)remoteDeviceSetReport:(id)arg1 type:(long long)arg2 reportID:(unsigned char)arg3 report:(id)arg4;
- (bool)remoteDeviceSetReportHandler:(id)arg1 packet:(struct { struct { unsigned int x_1_1_1 : 7; unsigned int x_1_1_2 : 10; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 9; } x1; unsigned char x2; unsigned char x3[0]; }*)arg2;
- (bool)remoteDeviceTimestampedReportHandler:(id)arg1 device:(id)arg2 packet:(struct { struct { unsigned int x_1_1_1 : 7; unsigned int x_1_1_2 : 10; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 9; } x1; unsigned char x2; unsigned long long x3; unsigned char x4[0]; }*)arg3;
- (unsigned long long)syncRemoteTimestamp:(unsigned long long)arg1 forEndpoint:(id)arg2;

@end
