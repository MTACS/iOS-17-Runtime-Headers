
@protocol HMDAccessoryBrowserInjectedSettings

@required

- (HMDAuthServer *)createAuthServerWithDelegate:(id <HMDAuthServerDelegate>)arg1;
- (HAPAccessoryServerBrowserBTLE *)createBtleAccessoryBrowser;
- (HMMTRAccessoryServerBrowser *)createCHIPAccessoryBrowser;
- (HAPAccessoryServerBrowser *)createHap2AccessoryBrowserWithStorage:(id <HAP2Storage>)arg1;
- (HAPAccessoryServerBrowserIP *)createIpAccessoryBrowser;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end
