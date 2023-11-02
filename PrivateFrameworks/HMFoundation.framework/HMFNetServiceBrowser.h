
@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate> {
    id /* block */  _browseBlock;
    bool  _browsing;
    NSMutableOrderedSet * _cachedNetServices;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFNetServiceBrowserDelegate> * _delegate;
    NSString * _domain;
    NSNetServiceBrowser * _internal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _netServices;
    NSString * _serviceType;
}

@property (nonatomic, copy) id /* block */ browseBlock;
@property (getter=isBrowsing, nonatomic) bool browsing;
@property (nonatomic, readonly, copy) NSArray *cachedNetServices;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMFNetServiceBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNetServiceBrowser *internal;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic) bool shouldCache;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_stopBrowsingWithError:(id)arg1;
- (void)addNetServiceToCache:(id)arg1;
- (id /* block */)browseBlock;
- (id)cachedNetServices;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)domain;
- (id)init;
- (id)initWithDomain:(id)arg1 serviceType:(id)arg2;
- (id)internal;
- (bool)isBrowsing;
- (id)logIdentifier;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (id)serviceType;
- (void)setBrowseBlock:(id /* block */)arg1;
- (void)setBrowsing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldCache:(bool)arg1;
- (id)shortDescription;
- (bool)shouldCache;
- (void)startBrowsingWithCompletionHandler:(id /* block */)arg1;
- (void)stopBrowsing;

@end
