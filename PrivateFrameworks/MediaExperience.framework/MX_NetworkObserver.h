
@interface MX_NetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> * mAccessQueue;
    NSObject<OS_nw_path> * mCurrentPath;
    NSObject<OS_nw_path_monitor> * mMonitor;
    bool  mNetworkReachable;
}

- (void)dealloc;
- (id)init;
- (bool)isCarrierNetworkReachable;
- (void)networkPathUpdate:(id)arg1;

@end
