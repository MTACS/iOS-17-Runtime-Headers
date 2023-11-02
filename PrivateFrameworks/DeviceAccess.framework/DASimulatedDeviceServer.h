
@interface DASimulatedDeviceServer : NSObject {
    bool  _activateCalled;
    CUBonjourAdvertiser * _bonjourAdvertiser;
    NSString * _deviceBonjourServiceType;
    NSString * _deviceIdentitifer;
    NSString * _deviceName;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSMutableSet * _tcpConnections;
    CUTCPServer * _tcpServer;
}

@property (nonatomic, copy) NSString *deviceBonjourServiceType;
@property (nonatomic, copy) NSString *deviceIdentitifer;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)_activate;
- (void)_connectionAccept:(id)arg1;
- (void)_connectionEnded:(id)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceBonjourServiceType;
- (id)deviceIdentitifer;
- (id)deviceName;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDeviceBonjourServiceType:(id)arg1;
- (void)setDeviceIdentitifer:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDispatchQueue:(id)arg1;

@end
