
@interface PKProximityAdvertiser : NSObject {
    NSObject<OS_dispatch_queue> * _advertiserQueue;
    bool  _isAdvertising;
    SFService * _nearbyInfoSharingService;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, readonly) bool isAdvertising;

- (void).cxx_destruct;
- (id /* block */)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)_queue_endAdvertising;
- (void)dealloc;
- (void)endAdvertising;
- (id)init;
- (bool)isAdvertising;
- (void)startAdvertisingForDuration:(double)arg1 completion:(id /* block */)arg2;

@end
