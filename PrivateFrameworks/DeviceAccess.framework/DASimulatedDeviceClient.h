
@interface DASimulatedDeviceClient : NSObject {
    bool  _activateCalled;
    NSString * _deviceBonjourServiceType;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
}

@property (nonatomic, copy) NSString *deviceBonjourServiceType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)_invalidated;
- (void)activate;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceBonjourServiceType;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDeviceBonjourServiceType:(id)arg1;
- (void)setDispatchQueue:(id)arg1;

@end
