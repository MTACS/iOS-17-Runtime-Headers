
@protocol SBDisplayAssertionCoordinatorDelegate <NSObject>

@required

- (void)assertionCoordinator:(SBDisplayAssertionCoordinator *)arg1 updatedAssertionPreferences:(SBDisplayAssertionPreferences *)arg2 oldPreferences:(SBDisplayAssertionPreferences *)arg3 forDisplay:(FBSDisplayIdentity *)arg4;

@end
