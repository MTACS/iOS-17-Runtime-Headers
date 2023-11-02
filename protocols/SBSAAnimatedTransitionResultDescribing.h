
@protocol SBSAAnimatedTransitionResultDescribing <NSObject, NSCopying>

@required

- (NSUUID *)animatedTransitionIdentifier;
- (<SBSAInterfaceElementPropertyIdentifying> *)associatedInterfaceElementPropertyIdentity;
- (bool)finished;
- (bool)isTransitionEndTargeted;
- (bool)retargeted;
- (double)targetedMilestone;

@end
