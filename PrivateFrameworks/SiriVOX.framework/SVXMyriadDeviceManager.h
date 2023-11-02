
@interface SVXMyriadDeviceManager : NSObject <SVXMyriadRequestDelegate> {
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    <SVXMyriadRequestDelegate> * _device;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeMyriadDeviceWithInstanceContext:(id)arg1 analytics:(id)arg2 preferences:(id)arg3 delegate:(id)arg4 workQueue:(id)arg5 analyticsQueue:(id)arg6;
- (id)initWithInstanceContext:(id)arg1 analytics:(id)arg2 preferences:(id)arg3 delegate:(id)arg4;
- (void)preheatMyriad;
- (void)resetMyriad;
- (void)setupEnabled:(bool)arg1;
- (void)startAdvertising:(unsigned long long)arg1 withMyriadGoodnessScoreContext:(id)arg2 withMyriadAudioContext:(id)arg3 completion:(id /* block */)arg4;

@end
