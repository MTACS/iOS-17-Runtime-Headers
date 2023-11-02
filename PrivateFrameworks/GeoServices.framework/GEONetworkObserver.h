
@interface GEONetworkObserver : NSObject {
    bool  _companionConnected;
    NSObject<OS_nw_path> * _currentPath;
    NSObject<OS_nw_path_evaluator> * _evaluator;
    bool  _initialized;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    bool  _networkConstrained;
    bool  _networkReachable;
}

@property (getter=isCellConnection, nonatomic, readonly) bool cellConnection;
@property (getter=isCompanionConnected, nonatomic, readonly) bool companionConnected;
@property (getter=isNetworkConstrained, nonatomic, readonly) bool networkConstrained;
@property (getter=isNetworkReachable, nonatomic, readonly) bool networkReachable;
@property (getter=isWiFiConnection, nonatomic, readonly) bool wifiConnection;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_initializeNetworkMonitor;
- (bool)_isConnectionType:(int)arg1;
- (void)_networkPathUpdated:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (void)initializeIfNecessary;
- (bool)isCellConnection;
- (bool)isCompanionConnected;
- (bool)isNetworkConstrained;
- (bool)isNetworkReachable;
- (bool)isWiFiConnection;
- (void)removeNetworkReachableObserver:(id)arg1;

@end
