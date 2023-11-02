
@interface _SBDisplayConnectionDonationTimer : NSObject <BSInvalidatable> {
    bool  _connect;
    long long  _counter;
    NSString * _deviceName;
    id /* block */  _handler;
    bool  _mirroring;
    NSString * _productName;
    NSTimer * _timer;
    NSString * _uniqueId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueId:(id)arg1 deviceName:(id)arg2 productName:(id)arg3 connect:(bool)arg4 mirroring:(bool)arg5 handler:(id /* block */)arg6;
- (void)invalidate;
- (void)resetTimerOnConnect:(bool)arg1;
- (bool)stateChanged;

@end
