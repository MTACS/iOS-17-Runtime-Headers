
@interface HAP2AccessoryServerDiscoveryBonjourLegacy : HAP2LoggingObject <HAP2AccessoryServerDiscovery> {
    CUBonjourBrowser * _browser;
    <HAP2AccessoryServerDiscoveryDelegate> * _delegate;
    bool  _discovering;
    NSString * _domain;
    HAP2PropertyLock * _propertyLock;
    NSString * _type;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) CUBonjourBrowser *browser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryServerDiscoveryDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (getter=isDiscovering, nonatomic) bool discovering;
@property (nonatomic, readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)new;

- (void).cxx_destruct;
- (void)_handleBrowserStopped:(id)arg1;
- (void)_handleDeviceFoundOrChanged:(id)arg1;
- (void)_handleDeviceLost:(id)arg1;
- (void)_reconfirmAccessory:(id)arg1;
- (void)_startBrowser;
- (void)_startDiscovering;
- (void)_stopBrowser;
- (void)_stopDiscovering;
- (id)browser;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)domain;
- (id)init;
- (id)initWithLocalDomainAndServiceType:(id)arg1;
- (id)initWithServiceType:(id)arg1 domain:(id)arg2;
- (bool)isDiscovering;
- (id)propertyLock;
- (void)reconfirmAccessory:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscovering:(bool)arg1;
- (void)startDiscovering;
- (void)stopDiscovering;
- (id)type;
- (id)workQueue;

@end
