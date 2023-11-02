
@interface SBWorkspace : NSObject <SBIdleTimerCoordinating, SBIdleTimerProviding> {
    SBWorkspaceTransaction * _currentTransaction;
    FBWorkspaceEventQueue * _eventQueue;
}

@property (nonatomic, readonly) SBWorkspaceTransaction *currentTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBWorkspaceEventQueue *eventQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)mainWorkspace;

- (void).cxx_destruct;
- (bool)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(id /* block */)arg3;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (id)createRequestForApplicationActivation:(id)arg1 withDisplayConfiguration:(id)arg2 options:(unsigned long long)arg3;
- (id)createRequestWithOptions:(unsigned long long)arg1;
- (id)createRequestWithOptions:(unsigned long long)arg1 displayConfiguration:(id)arg2;
- (id)currentTransaction;
- (id)eventQueue;
- (bool)executeTransitionRequest:(id)arg1;
- (bool)executeTransitionRequest:(id)arg1 withValidator:(id /* block */)arg2;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)init;
- (id)initWithEventQueue:(id)arg1;
- (bool)requestTransitionWithBuilder:(id /* block */)arg1;
- (bool)requestTransitionWithOptions:(unsigned long long)arg1 builder:(id /* block */)arg2 validator:(id /* block */)arg3;
- (bool)requestTransitionWithOptions:(unsigned long long)arg1 displayConfiguration:(id)arg2 builder:(id /* block */)arg3;
- (bool)requestTransitionWithOptions:(unsigned long long)arg1 displayConfiguration:(id)arg2 builder:(id /* block */)arg3 validator:(id /* block */)arg4;
- (id)transactionForTransitionRequest:(id)arg1;

@end
