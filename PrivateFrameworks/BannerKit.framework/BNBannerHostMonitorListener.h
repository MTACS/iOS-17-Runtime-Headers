
@interface BNBannerHostMonitorListener : NSObject <BSServiceConnectionListenerDelegate> {
    NSSet * _authorizedBundleIDs;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isBannerHostAvailable, nonatomic, readonly) bool bannerHostAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id*)arg2;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_removeConnection:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)initWithServiceDomain:(id)arg1 authorizedBundleIDs:(id)arg2;
- (bool)isBannerHostAvailable;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeObserver:(id)arg1;

@end
