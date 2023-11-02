
@interface SBAnalyticsStateMachineEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {
    unsigned long long  _currentState;
    NSMutableArray * _edges;
}

@property (nonatomic, readonly) unsigned long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEdge:(id)arg1;
- (unsigned long long)currentState;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
