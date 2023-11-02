
@interface _HMFNetManagerWoWAssertion : HMFObject {
    HMFWiFiManager * _manager;
}

@property (nonatomic, readonly) HMFWiFiManager *manager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWifiManager:(id)arg1;
- (id)manager;

@end
