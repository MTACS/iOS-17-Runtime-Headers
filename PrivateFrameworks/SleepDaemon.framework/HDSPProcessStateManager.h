
@interface HDSPProcessStateManager : NSObject {
    <HDSPProcessStateManagerDelegate> * _delegate;
    NSMutableSet * _processIdentifiers;
    RBSProcessMonitor * _processStateMonitor;
    id /* block */  _processStateProvider;
}

@property (nonatomic) <HDSPProcessStateManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_process:(id)arg1 didUpdateFromState:(id)arg2 toState:(id)arg3;
- (void)_updateConfiguration;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithProcessStateProvider:(id /* block */)arg1;
- (bool)isProcessSuspended:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)startMonitoringProcessState:(int)arg1;
- (void)stopMonitoringProcessState:(int)arg1;

@end
