
@interface BLSHEnvironmentTransitionState : NSObject {
    <BLSHEnvironmentTransitionStateDelegate> * _delegate;
    <BLSHBacklightSceneHostEnvironment> * _environment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_animating;
    BLSHEnvironmentTransitionStateTarget * _lock_animationCompletedForOldTarget;
    BLSHEnvironmentTransitionStateTarget * _lock_animationCompletedWithNewTarget;
    BLSHEnvironmentTransitionStateTarget * _lock_inProgressUpdateTarget;
    unsigned long long  _lock_nextSequenceID;
    BLSHEnvironmentTransitionStateTarget * _lock_requestingFidelityTarget;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (getter=isUpdatingInitialState, nonatomic, readonly) bool updatingInitialState;
@property (getter=isUpdatingVisualState, nonatomic, readonly) bool updatingVisualState;

+ (id)createStateForEnvironment:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)environment;
- (bool)isAnimating;
- (bool)isUpdatedToBacklightState:(long long)arg1;
- (bool)isUpdatingInitialState;
- (bool)isUpdatingVisualState;
- (void)updateToBacklightState:(long long)arg1 forEvent:(id)arg2 touchTargetable:(bool)arg3 presentationDate:(id)arg4 sceneUpdate:(id)arg5 performBacklightRamp:(id /* block */)arg6;
- (void)updateToDateSpecifier:(id)arg1;

@end
