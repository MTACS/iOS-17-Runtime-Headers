
@interface SVXMyriadWiFiAssertion : NSObject {
    AFWatchdogTimer * _assertionWaitTimer;
    <SVXMyriadWiFiAssertionProtocol> * _delegate;
    bool  _wifiAssertionAcquired;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) AFWatchdogTimer *assertionWaitTimer;
@property (nonatomic, readonly) <SVXMyriadWiFiAssertionProtocol> *delegate;
@property (nonatomic, readonly) bool wifiAssertionAcquired;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_releaseAssertion;
- (void)acquireHomeKitAccessoryWiFiAssertionWithTimeout:(double)arg1;
- (id)assertionWaitTimer;
- (id)delegate;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)releaseHomeKitAccessoryWiFiAssertion;
- (void)setAssertionWaitTimer:(id)arg1;
- (bool)wifiAssertionAcquired;
- (id)workQueue;

@end
