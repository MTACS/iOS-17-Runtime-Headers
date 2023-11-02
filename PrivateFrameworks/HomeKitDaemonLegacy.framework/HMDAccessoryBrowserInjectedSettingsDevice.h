
@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)arg1;
- (id)createBtleAccessoryBrowser;
- (id)createCHIPAccessoryBrowser;
- (id)createHap2AccessoryBrowserWithStorage:(id)arg1;
- (id)createIpAccessoryBrowser;
- (id)init;
- (id)workQueue;

@end
