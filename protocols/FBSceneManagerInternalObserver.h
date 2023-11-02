
@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>

@optional

- (void)sceneManagerDidEndSceneUpdateSynchronization:(FBSceneManager *)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(FBSceneManager *)arg1;

@end
