
@interface HMFNetworkBrowser : HMFObject {
    <HMFNetworkBrowserDelegate> * _delegate;
    NSString * _domain;
    NSMutableArray * _internalBrowsers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _networkServices;
    NSArray * _serviceTypes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <HMFNetworkBrowserDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSArray *foundNetworkServices;
@property (nonatomic, retain) NSMutableArray *internalBrowsers;
@property (nonatomic, readonly, copy) NSArray *serviceTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addService:(id)arg1;
- (void)_removeService:(id)arg1;
- (id)_startBrowsing;
- (id)_stopBrowsing;
- (void)_updateService:(id)arg1;
- (id)browserDelegate;
- (id)delegate;
- (id)domain;
- (id)foundNetworkServices;
- (id)initWithQueue:(id)arg1 domain:(id)arg2 serviceTypes:(id)arg3;
- (id)internalBrowsers;
- (id)serviceTypes;
- (void)setDelegate:(id)arg1;
- (void)setInternalBrowsers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)startBrowsing;
- (id)startBrowsingWithTimeout:(double)arg1;
- (id)stopBrowsing;
- (id)workContext;
- (id)workQueue;

@end
