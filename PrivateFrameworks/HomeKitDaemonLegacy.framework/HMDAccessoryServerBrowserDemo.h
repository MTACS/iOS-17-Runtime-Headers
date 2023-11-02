
@interface HMDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser {
    bool  _accessoryPaired;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSDictionary * _demoData;
    NSMutableArray * _servers;
}

@property (nonatomic) bool accessoryPaired;
@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSDictionary *demoData;
@property (nonatomic, retain) NSMutableArray *servers;

- (void).cxx_destruct;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_handleTestAccessoryGenerateNotification:(id)arg1;
- (id)_handleTestAccessoryReadValue:(id)arg1;
- (id)_handleTestAccessorySetReachability:(id)arg1;
- (id)_handleTestAccessorySetValue:(id)arg1 response:(id*)arg2;
- (id)_handleTestModeConfigRequest:(id)arg1 response:(id*)arg2;
- (bool)accessoryPaired;
- (void)appendDemoData:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (id)demoData;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)discoverServer;
- (long long)linkType;
- (void)loadDemoData:(id)arg1 finalized:(bool)arg2;
- (void)resetDemoAccessories;
- (void)resetDemoAccessory:(id)arg1;
- (id)servers;
- (void)setAccessoryPaired:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDemoData:(id)arg1;
- (void)setServers:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;

@end
