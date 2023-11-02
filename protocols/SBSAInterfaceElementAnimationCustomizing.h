
@protocol SBSAInterfaceElementAnimationCustomizing <NSObject>

@required

- (void)addMilestones:(NSSet *)arg1 forPropertyIdentity:(id <SBSAInterfaceElementPropertyIdentifying>)arg2;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg1 overridingExistingUnanimatedSettings:(bool)arg2 withProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg3 withMilestones:(NSSet *)arg4;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg1 withProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg2 withMilestones:(NSSet *)arg3;
- (void)setAnimatedTransitionDescription:(id <SBSAAnimatedTransitionDescribing>)arg1 forProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg2 withMilestones:(NSSet *)arg3;
- (void)setAnimatedTransitionDescription:(id <SBSAAnimatedTransitionDescribing>)arg1 overridingExistingUnanimatedSettings:(bool)arg2 forProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg3 withMilestones:(NSSet *)arg4;

@end
