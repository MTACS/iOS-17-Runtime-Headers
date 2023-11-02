
@interface _DKForegroundServicesMonitor : _DKMonitor {
    NSMutableSet * _previouslyForegroundServices;
    RBSProcessMonitor * _processMonitor;
}

+ (id)entitlements;

- (void).cxx_destruct;
- (void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2;
- (void)processMonitor:(id)arg1 didUpdateState:(id)arg2 forProcess:(id)arg3;
- (id /* block */)processUpdateHandler;
- (id)servicesOfInterestForWatchCommunication;
- (void)start;
- (void)stop;

@end
