
@interface CAProcessMonitor : NSObject {
    id /* block */  _callback;
    NSMutableSet * _processIdentifiers;
    RBSProcessMonitor * _processMonitor;
}

- (void)addMonitoringProcess:(int)arg1 isRunning:(bool*)arg2 isSuspended:(bool*)arg3;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1;
- (void)removeMonitoringProcess:(int)arg1;
- (void)updateConfiguration;

@end
