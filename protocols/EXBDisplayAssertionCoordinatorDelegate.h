
@protocol EXBDisplayAssertionCoordinatorDelegate <NSObject>

@required

- (void)assertionCoordinator:(EXBDisplayAssertionCoordinator *)arg1 updatedAssertionPreferences:(EXBDisplayAssertionPreferences *)arg2 oldPreferences:(EXBDisplayAssertionPreferences *)arg3 forDisplay:(FBSDisplayIdentity *)arg4;

@end
