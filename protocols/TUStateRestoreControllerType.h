
@protocol TUStateRestoreControllerType

@required

- (bool)hasStateDiscarded;
- (bool)isStateRestorationAllowed;
- (bool)isStateRestorationFeatureEnabled;
- (void)markStateDiscarded;
- (void)navigationDidHappen;
- (void)sceneDidEnterBackground;

@end
