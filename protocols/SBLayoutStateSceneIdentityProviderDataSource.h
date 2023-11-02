
@protocol SBLayoutStateSceneIdentityProviderDataSource <NSObject>

@required

- (SBMainDisplayLayoutState *)currentLayoutState;
- (NSSet *)externalApplicationSceneHandles;
- (SBMainDisplayLayoutStateManager *)layoutStateManager;
- (NSString *)newSceneIdentifierForBundleIdentifier:(NSString *)arg1 supportsMultiwindow:(bool)arg2;
- (NSSet *)transientApplicationSceneHandlesForApplication:(SBApplication *)arg1;

@end
