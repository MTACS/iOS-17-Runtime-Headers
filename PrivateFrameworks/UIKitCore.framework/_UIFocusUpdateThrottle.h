
@interface _UIFocusUpdateThrottle : NSObject {
    double  _currentTimeout;
    double  _lastUpdate;
    unsigned long long  _nilUpdateCount;
    id /* block */  _updateHandler;
    bool  _updateIsScheduled;
    NSTimer * _updateTimer;
}

- (void).cxx_destruct;
- (void)_performScheduledUpdate;
- (void)didCreateProgrammaticFocusUpdateContext:(id)arg1;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)scheduleProgrammaticFocusUpdate;
- (void)teardown;

@end
