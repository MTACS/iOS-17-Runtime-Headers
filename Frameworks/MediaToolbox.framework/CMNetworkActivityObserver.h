
@interface CMNetworkActivityObserver : NSObject {
    CMNetworkActivityMonitor * _activityMonitor;
    int  _cmActivityPollingToken;
    int  _cmActivityToken;
    bool  _registered;
    bool  _valid;
}

@property (nonatomic, readonly) CMNetworkActivityMonitor *activityMonitor;

+ (id)registeredObserverForActivityMonitor:(id)arg1;

- (void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(id /* block */)arg2;
- (id)activityMonitor;
- (void)dealloc;
- (id)initForActivityMonitor:(id)arg1;
- (void)invalidate;
- (void)registerObservations;
- (void)unregisterObservations;

@end
