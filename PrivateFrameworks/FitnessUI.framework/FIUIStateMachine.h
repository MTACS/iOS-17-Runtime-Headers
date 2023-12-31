
@interface FIUIStateMachine : NSObject {
    id /* block */  _diagnosticHandler;
    id /* block */  _errorHandler;
    bool  _handlingEvent;
    FIUIState * _initialState;
    NSString * _label;
    NSMutableSet * _parentStates;
    long long  _pendingEvent;
    NSMutableArray * _pendingEvents;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _queueKey;
    FIUIState * _state;
    NSMutableSet * _states;
    id /* block */  _transitionalEventFilter;
    NSMutableArray * _transitionalEvents;
}

@property (copy) id /* block */ diagnosticHandler;
@property (copy) id /* block */ errorHandler;
@property (nonatomic, retain) NSString *label;
@property long long pendingEvent;
@property (copy) id /* block */ transitionalEventFilter;

- (void).cxx_destruct;
- (void)_queue_handleEvents;
- (void)_queue_processEvent:(long long)arg1;
- (void)_queue_setInitialStateIfNeeded:(id)arg1;
- (void)addChildStates:(id)arg1 toState:(id)arg2 withEntryState:(id)arg3;
- (void)addState:(id)arg1;
- (void)addStates:(id)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)diagnosticHandler;
- (id /* block */)errorHandler;
- (void)event:(long long)arg1;
- (void)eventAsync:(long long)arg1;
- (void)export;
- (id)graphDescription;
- (id)initWithLabel:(id)arg1 queue:(id)arg2;
- (id)label;
- (long long)pendingEvent;
- (id)queue;
- (void)setDiagnosticHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPendingEvent:(long long)arg1;
- (void)setTransitionalEventFilter:(id /* block */)arg1;
- (id)state;
- (id /* block */)transitionalEventFilter;

@end
