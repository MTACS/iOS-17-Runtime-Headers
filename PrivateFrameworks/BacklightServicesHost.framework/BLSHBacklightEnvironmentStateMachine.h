
@interface BLSHBacklightEnvironmentStateMachine : NSObject <BLSHEnvironmentTransitionStateDelegate, BSInvalidatable> {
    <BLSHBacklightEnvironmentStateMachineDelegate> * _delegate;
    NSMutableArray * _didBeginUpdateHistory;
    NSMutableArray * _didCompleteUpdateHistory;
    <BLSHInactiveBudgetPolicing_Private> * _inactiveBudgetPolicy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _lock_addingEnvironmentsCount;
    bool  _lock_invalidated;
    long long  _lock_performEventTargetBacklightState;
    BLSHBacklightEnvironmentPresentation * _lock_presentation;
    BLSSetPresentationOperation * _lock_setPresentationOperation;
    NSMutableSet * _lock_staleEnvironmentsThatNeedDeferredUpdate;
    long long  _lock_targetBacklightState;
    NSMutableSet * _lock_updatingDateSpecifierTransitionStates;
    NSMutableSet * _lock_updatingVisualStateTransitionStates;
    <BLSHOSTimerProviding> * _osTimerProvider;
    bool  _pendingNotifyBeganUpdatingState;
    NSMutableArray * _performEventHistory;
    unsigned long long  _stateHandler;
    NSMapTable * _transitionStates;
    BLSHPresentationDateSpecifier * _updatingSpecifier;
    bool  _updatingState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <BLSHBacklightEnvironmentStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHInactiveBudgetPolicing_Private> *inactiveBudgetPolicy;
@property (nonatomic, readonly) <BLSHOSTimerProviding> *osTimerProvider;
@property (nonatomic, readonly) bool pendingNotifyBeganUpdatingState;
@property (nonatomic, readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *updatingDateSpecifierTransitionStates;
@property (getter=isUpdatingPresentation, nonatomic, readonly) bool updatingPresentation;
@property (getter=isUpdatingState, nonatomic, readonly) bool updatingState;
@property (nonatomic, readonly, copy) NSSet *updatingVisualStateTransitionStates;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)inactiveBudgetPolicy;
- (id)initWithPresentation:(id)arg1 backlightState:(long long)arg2 delegate:(id)arg3 inactiveBudgetPolicy:(id)arg4 osTimerProvider:(id)arg5;
- (void)invalidate;
- (bool)isUpdatingPresentation;
- (bool)isUpdatingState;
- (id)osTimerProvider;
- (bool)pendingNotifyBeganUpdatingState;
- (void)performEvent:(id)arg1 withInitialSpecifier:(id)arg2 performBacklightRamp:(id /* block */)arg3;
- (void)populateEnvironmentStateMachineStruct:(struct { unsigned int x1 : 1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; } x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; } x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; unsigned int x_5_1_5 : 1; } x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; struct { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; } x7; unsigned int x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; } x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; } x10; }*)arg1;
- (id)presentation;
- (void)setPresentation:(id)arg1 withTargetBacklightState:(long long)arg2;
- (void)transitionState:(id)arg1 didBeginUpdateToBacklightState:(long long)arg2 visualState:(id)arg3;
- (void)transitionState:(id)arg1 didCompleteUpdateToBacklightState:(long long)arg2 visualState:(id)arg3;
- (void)transitionState:(id)arg1 didUpdateToDateSpecifier:(id)arg2;
- (void)updateAllEnvironmentsInPresentation;
- (void)updateEnvironment:(id)arg1;
- (void)updateToSpecifier:(id)arg1;
- (id)updatingDateSpecifierTransitionStates;
- (id)updatingVisualStateTransitionStates;

@end
