
@interface SRUIFSiriSessionStateHandler : NSObject <SRUIFStateMachineDelegate> {
    <SRUIFSiriSessionStateHandlerDelegate> * _delegate;
    SRUIFSiriSessionStateSignpostLogger * _signpostLogger;
    NSSet * _siriSessionPassthroughEvents;
    SRUIFStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SRUIFSiriSessionStateHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3 machAbsoluteTime:(double)arg4;
- (id)_stateMachine;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)performTransitionForEvent:(long long)arg1;
- (void)performTransitionForEvent:(long long)arg1 eventTimeStamp:(double)arg2;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3 eventTimeStamp:(double)arg4;

@end
