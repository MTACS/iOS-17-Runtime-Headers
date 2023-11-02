
@interface SBSAAnimatedTransitionResultDescriptionMutator : NSObject {
    SBSAAnimatedTransitionResultDescription * _animatedTransitionResultDescription;
}

@property (nonatomic, copy) NSUUID *animatedTransitionIdentifier;
@property (nonatomic, readonly) SBSAAnimatedTransitionResultDescription *animatedTransitionResultDescription;
@property (nonatomic, copy) <SBSAInterfaceElementPropertyIdentifying> *associatedInterfaceElementPropertyIdentity;
@property (nonatomic) bool finished;
@property (nonatomic) bool retargeted;
@property (nonatomic) double targetedMilestone;
@property (getter=isTransitionEndTargeted, nonatomic) bool transitionEndTargeted;

- (void).cxx_destruct;
- (id)animatedTransitionIdentifier;
- (id)animatedTransitionResultDescription;
- (id)associatedInterfaceElementPropertyIdentity;
- (id)description;
- (bool)finished;
- (id)initWithAnimatedTransitionResultDescription:(id)arg1;
- (bool)isTransitionEndTargeted;
- (bool)retargeted;
- (void)setAnimatedTransitionIdentifier:(id)arg1;
- (void)setAssociatedInterfaceElementPropertyIdentity:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setRetargeted:(bool)arg1;
- (void)setTargetedMilestone:(double)arg1;
- (void)setTransitionEndTargeted:(bool)arg1;
- (double)targetedMilestone;

@end
