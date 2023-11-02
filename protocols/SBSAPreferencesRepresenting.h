
@protocol SBSAPreferencesRepresenting <NSCopying, SBSAInterfaceElementAnimationDescribingPublic>

@required

- (NSArray *)actions;
- (void)finalizePreferencesForApplication:(SBSAContext *)arg1;
- (NSArray *)gestureDescriptions;
- (NSArray *)timerDescriptions;

@end
