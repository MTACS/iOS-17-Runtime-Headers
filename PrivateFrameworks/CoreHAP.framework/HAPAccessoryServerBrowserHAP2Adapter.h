
@interface HAPAccessoryServerBrowserHAP2Adapter : HAPAccessoryServerBrowser <HAP2AccessoryServerBrowserDelegate> {
    <HAP2AccessoryServerBrowserPrivate> * _browser;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableDictionary * _discoveredServers;
    HAP2PropertyLock * _propertyLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessoryServerBrowser:(id)arg1 didDiscoverPairedAccessoryServer:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)accessoryServerBrowser:(id)arg1 didDiscoverUnpairedAccessoryServer:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)accessoryServerBrowser:(id)arg1 didLosePairedAccessoryServer:(id)arg2 error:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didLoseUnpairedAccessoryServer:(id)arg2 error:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)deRegisterAccessoryWithIdentifier:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)initWithHAP2Browser:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 storage:(id)arg2;
- (bool)isPaired:(id)arg1;
- (long long)linkType;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerPairedAccessoryWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)startConfirmingPairedAccessoryReachability;
- (void)startDiscoveringAccessoryServers;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)stopDiscoveringAccessoryServers;

@end
