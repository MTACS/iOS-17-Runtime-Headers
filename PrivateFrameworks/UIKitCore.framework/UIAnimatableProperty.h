
@interface UIAnimatableProperty : UIAnimatablePropertyBase {
    UIViewRunningAnimationEntry * _animationEntry;
    NSObject<OS_dispatch_queue> * _animationEntryLockingQueue;
    UIViewInProcessAnimationState * _animationState;
    <UIViewAnimationComposing> * _composer;
    bool  _invalidated;
    id /* block */  _invalidationCallback;
    NSObject<OS_dispatch_queue> * _invalidationLockingQueue;
    int  _ownershipCount;
    <UIVectorOperatable> * _pendingTargetVelocity;
    <UIVectorOperatable> * _pendingVelocity;
    id  _presentationValue;
    _UIViewAnimatablePropertyTransformer * _transformer;
    id  _value;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _valueLock;
    bool  _velocityUsableForVFD;
}

@property (nonatomic, retain) UIViewRunningAnimationEntry *animationEntry;
@property (nonatomic) UIViewInProcessAnimationState *animationState;
@property (nonatomic, retain) <UIViewAnimationComposing> *composer;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, copy) id /* block */ invalidationCallback;
@property (nonatomic) int ownershipCount;
@property (retain) id presentationValue;
@property (retain) id value;
@property (nonatomic) id velocity;
@property (getter=isVelocityUsableForVFD, nonatomic) bool velocityUsableForVFD;

- (void).cxx_destruct;
- (bool)_performAnimationFromCurrentValue:(id)arg1;
- (bool)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(id /* block */)arg3 newValueCallback:(id /* block */)arg4 removedCallback:(id /* block */)arg5;
- (id)animationEntry;
- (id)animationState;
- (id)composer;
- (id)debugDescription;
- (id)initWithInvalidationCallback:(id /* block */)arg1;
- (void)invalidate;
- (void)invalidateAndStopImmediately:(bool)arg1;
- (void)invalidateIfPossible;
- (id /* block */)invalidationCallback;
- (bool)isInvalidated;
- (bool)isVelocityUsableForVFD;
- (int)ownershipCount;
- (id)presentationValue;
- (void)setAnimationEntry:(id)arg1;
- (void)setAnimationState:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setInvalidationCallback:(id /* block */)arg1;
- (void)setOwnershipCount:(int)arg1;
- (void)setPresentationValue:(id)arg1;
- (void)setTransformer:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVelocity:(id)arg1;
- (void)setVelocity:(id)arg1 target:(bool)arg2;
- (void)setVelocityUsableForVFD:(bool)arg1;
- (id)transformer;
- (id)value;
- (id)velocity;
- (id)velocityTarget:(bool)arg1;

@end
