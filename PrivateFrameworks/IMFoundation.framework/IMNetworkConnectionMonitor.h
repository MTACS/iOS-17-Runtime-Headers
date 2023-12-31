
@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMReachabilityDelegate, IMSystemMonitorListener> {
    unsigned long long  _hostFlags;
    IMReachability * _hostReachability;
    unsigned long long  _ipFlags;
    IMReachability * _ipReachability;
    bool  _isConnected;
    bool  _isSleeping;
    CUTDeferredTaskQueue * _performCallbackTask;
}

@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic, retain) IMReachability *_hostReachability;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic, retain) IMReachability *_ipReachability;
@property (nonatomic) bool _isConnected;
@property (nonatomic) bool _isSleeping;
@property (nonatomic, readonly) CUTDeferredTaskQueue *performCallbackTask;

- (void).cxx_destruct;
- (void)_clearReachability:(id*)arg1 flags:(unsigned long long*)arg2;
- (void)_doCallbackLater;
- (void)_doCallbackNow;
- (unsigned long long)_hostFlags;
- (id)_hostReachability;
- (unsigned long long)_ipFlags;
- (id)_ipReachability;
- (bool)_isConnected;
- (bool)_isSleeping;
- (void)_networkManagedUpdated:(id)arg1;
- (void)_setup;
- (void)_setupReachability;
- (void)clear;
- (void)dealloc;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)goDisconnected;
- (bool)isImmediatelyReachable;
- (id)performCallbackTask;
- (void)reachabilityDidChange:(id)arg1;
- (void)set_hostFlags:(unsigned long long)arg1;
- (void)set_hostReachability:(id)arg1;
- (void)set_ipFlags:(unsigned long long)arg1;
- (void)set_ipReachability:(id)arg1;
- (void)set_isConnected:(bool)arg1;
- (void)set_isSleeping:(bool)arg1;
- (void)systemDidWake;
- (void)systemWillSleep;

@end
