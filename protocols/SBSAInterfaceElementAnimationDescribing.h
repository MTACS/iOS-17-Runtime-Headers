
@protocol SBSAInterfaceElementAnimationDescribing <NSObject>

@required

- (<SBSAAnimatedTransitionDescribing> *)animatedTransitionDescriptionForProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg1;
- (<SBSAAnimatedTransitionDescribing> *)effectiveAnimatedTransitionDescriptionForProperty:(id <SBSAInterfaceElementPropertyIdentifying>)arg1;

@end
