
@interface _DBWorkspaceStateChangeSession : NSObject <DBWorkspaceStateChangeSession> {
    bool  _invalidated;
    id /* block */  _invalidationBlock;
    id  _owner;
    id /* block */  _stateChangeBlock;
    NSTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id owner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startWatchdogTimer;
- (void)_watchdogTimerFired;
- (void)dealloc;
- (id)initWithStateChangeBlock:(id /* block */)arg1 invalidationBlock:(id /* block */)arg2;
- (void)invalidate;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)setState:(id)arg1;

@end
