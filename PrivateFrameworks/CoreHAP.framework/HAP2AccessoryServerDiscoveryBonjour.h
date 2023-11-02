
@interface HAP2AccessoryServerDiscoveryBonjour : HAP2LoggingObject <HAP2AccessoryServerDiscovery> {
    NSMutableArray * _browseResults;
    NSObject<OS_nw_browser> * _browser;
    <HAP2AccessoryServerDiscoveryDelegate> * _delegate;
    bool  _discovering;
    NSString * _domain;
    HAP2PropertyLock * _propertyLock;
    NSString * _type;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *browseResults;
@property (nonatomic, retain) NSObject<OS_nw_browser> *browser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryServerDiscoveryDelegate> *delegate;
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
- (void)_handleBrowseResults:(id)arg1;
- (void)_handleBrowseResultsChange:(id)arg1 current:(id)arg2 batchComplete:(bool)arg3;
- (void)_handleStateChange:(int)arg1 error:(id)arg2;
- (void)_startBrowser;
- (void)_startDiscovering;
- (void)_stopBrowser;
- (void)_stopDiscovering;
- (id)browseResults;
- (id)browser;
- (void)dealloc;
- (id)delegate;
- (id)domain;
- (id)init;
- (id)initWithLocalDomainAndServiceType:(id)arg1;
- (id)initWithServiceType:(id)arg1 domain:(id)arg2;
- (bool)isDiscovering;
- (id)propertyLock;
- (void)reconfirmAccessory:(id)arg1;
- (void)setBrowseResults:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscovering:(bool)arg1;
- (void)startDiscovering;
- (void)stopDiscovering;
- (id)type;
- (id)workQueue;

@end
