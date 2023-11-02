
@interface SBSAAnimatedTransitionDescriptionMutator : NSObject {
    SBSAAnimatedTransitionDescription * _animatedTransitionDescription;
}

@property (nonatomic, readonly) SBSAAnimatedTransitionDescription *animatedTransitionDescription;
@property (nonatomic, copy) NSUUID *animatedTransitionIdentifier;
@property (nonatomic, copy) SBFFluidBehaviorSettings *behaviorSettings;
@property (nonatomic, copy) NSSet *milestones;
@property (nonatomic, copy) NSString *responsibleProviderDebugString;

- (void).cxx_destruct;
- (id)animatedTransitionDescription;
- (id)animatedTransitionIdentifier;
- (id)auxillaryBehaviorSettingsForKeyPath:(id)arg1;
- (id)behaviorSettings;
- (id)description;
- (id)initWithAnimatedTransitionDescription:(id)arg1;
- (id)keyPathsWithAuxillaryBehaviorSettings;
- (id)milestones;
- (id)responsibleProviderDebugString;
- (void)setAnimatedTransitionIdentifier:(id)arg1;
- (void)setAuxillaryBehaviorSettings:(id)arg1 forKeyPath:(id)arg2;
- (void)setBehaviorSettings:(id)arg1;
- (void)setMilestones:(id)arg1;
- (void)setResponsibleProviderDebugString:(id)arg1;

@end
