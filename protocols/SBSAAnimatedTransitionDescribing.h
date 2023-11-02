
@protocol SBSAAnimatedTransitionDescribing <NSObject, NSCopying>

@required

- (NSUUID *)animatedTransitionIdentifier;
- (SBFFluidBehaviorSettings *)auxillaryBehaviorSettingsForKeyPath:(NSString *)arg1;
- (SBFFluidBehaviorSettings *)behaviorSettings;
- (NSArray *)keyPathsWithAuxillaryBehaviorSettings;

@end
