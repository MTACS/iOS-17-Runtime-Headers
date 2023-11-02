
@interface HIDRemoteEndpoint : NSObject {
    NSMutableDictionary * _devices;
    unsigned long long  _endpointID;
    NSMutableArray * _prevDeviceLog;
    unsigned char  _primarySide;
}

@property unsigned long long endpointID;
@property unsigned char primarySide;

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (id)copyState;
- (unsigned long long)endpointID;
- (id)getDevice:(unsigned long long)arg1;
- (id)initWithID:(unsigned long long)arg1;
- (unsigned char)primarySide;
- (void)removeAllDevices;
- (void)removeDevice:(id)arg1;
- (void)removeDeviceID:(unsigned long long)arg1;
- (void)setEndpointID:(unsigned long long)arg1;
- (void)setPrimarySide:(unsigned char)arg1;

@end
