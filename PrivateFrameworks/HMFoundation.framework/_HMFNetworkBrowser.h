
@interface _HMFNetworkBrowser : HMFObject {
    NSString * _domain;
    NSObject<OS_nw_browser> * _nw_browser;
    NSString * _serviceType;
    id /* block */  _updateBlock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) NSObject<OS_nw_browser> *nw_browser;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithQueue:(id)arg1 domain:(id)arg2 serviceType:(id)arg3 updateBlock:(id /* block */)arg4;
- (id)logIdentifier;
- (id)nw_browser;
- (id)serviceType;
- (void)setDomain:(id)arg1;
- (void)setNw_browser:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)shortDescription;
- (id)startBrowsing;
- (void)stop;
- (id)stopBrowsing;
- (id /* block */)updateBlock;
- (id)workContext;
- (id)workQueue;

@end
