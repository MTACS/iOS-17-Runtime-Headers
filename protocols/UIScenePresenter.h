
@protocol UIScenePresenter <BSInvalidatable>

@required

- (void)activate;
- (void)addObserver:(id <UIScenePresenterObserver>)arg1;
- (void)deactivate;
- (NSString *)identifier;
- (void)invalidate;
- (bool)isActive;
- (bool)isHosting;
- (bool)isInvalidated;
- (void)modifyPresentationContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIMutableScenePresentationContext *, void*
- (FBSceneSnapshot *)newSnapshot;
- (FBSceneSnapshotContext *)newSnapshotContext;
- (UIView<UISceneSnapshotPresentation> *)newSnapshotPresentationView;
- (UIScenePresentationContext *)presentationContext;
- (UIView<UIScenePresentation> *)presentationView;
- (void)removeObserver:(id <UIScenePresenterObserver>)arg1;
- (FBScene *)scene;

@end
