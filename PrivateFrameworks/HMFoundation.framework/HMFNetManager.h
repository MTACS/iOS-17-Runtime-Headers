
@interface HMFNetManager : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMFWiFiManager * _wifiManager;
    _HMFNetManagerWoWAssertion * _wowAssertion;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) HMFWiFiManager *wifiManager;
@property _HMFNetManagerWoWAssertion *wowAssertion;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)deregisterObject:(id)arg1;
- (void)deregisterWoWAssertionForObject:(id)arg1;
- (id)init;
- (id)initWithWiFiManager:(id)arg1;
- (void)registerWoWAssertionForObject:(id)arg1;
- (void)setWowAssertion:(id)arg1;
- (id)wifiManager;
- (id)wowAssertion;

@end
