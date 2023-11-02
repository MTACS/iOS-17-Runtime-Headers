
@protocol SBScenePresenting <NSObject>

@required

- (NSError *)dismissScene:(FBScene *)arg1;
- (NSError *)presentScene:(void *)arg1 viewControllerBuilderBlock:(void *)arg2; // needs 2 arg types, found 6: FBScene *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <SBSceneViewControllerBuilding> *, id /* block */, void*

@optional

- (bool)isVisibleOnScreen;
- (FBSSceneIdentityToken *)parentSceneIdentityToken;
- (void)scene:(FBScene *)arg1 didChangeTraitsParticipantDelegate:(SBTraitsSceneParticipantDelegate *)arg2;
- (void)scene:(FBScene *)arg1 hasVisibleContent:(bool)arg2;
- (void)sceneDidChangeDisplayIdentity:(FBScene *)arg1;
- (void)setPresentingDelegate:(id <SBScenePresentingDelegate>)arg1;

@end
