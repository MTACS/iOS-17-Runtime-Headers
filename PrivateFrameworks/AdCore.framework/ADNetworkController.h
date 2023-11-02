
@interface ADNetworkController : NSObject {
    bool  _canReachTheNetwork;
    bool  _isUpdating;
    int  _networkType;
    NSTimer * _notificationTimer;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability { } * _reachability;
    unsigned int  _reachabilityFlags;
    struct __SCDynamicStore { } * _store;
}

@property bool canReachTheNetwork;
@property bool isUpdating;

+ (id)sharedNetworkController;

- (void).cxx_destruct;
- (void)_checkForNetwork;
- (void)_checkForNetworkAndNotify;
- (void)_updateStatus:(bool)arg1;
- (bool)canReachTheNetwork;
- (int)cellNetworkType;
- (int)dataIndicatorToConnection:(int)arg1;
- (id)getDataContext:(id)arg1;
- (bool)isUpdating;
- (int)networkType;
- (void)setCanReachTheNetwork:(bool)arg1;
- (void)setIsUpdating:(bool)arg1;
- (void)start;

@end
