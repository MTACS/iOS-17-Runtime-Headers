
@protocol FBSceneEventCoordinating <NSObject>

@required

- (void)scene:(void *)arg1 deactivateAndInvalidate:(void *)arg2 withError:(void *)arg3 block:(void *)arg4; // needs 4 arg types, found 8: FBScene *, bool, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(void *)arg1 enumerateAndCalloutToObserversWithEventName:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: FBScene *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSceneObserver *, void*
- (void)scene:(void *)arg1 handleUpdateToSettings:(void *)arg2 withTransitionContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: FBScene *, FBSSceneSettings *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
