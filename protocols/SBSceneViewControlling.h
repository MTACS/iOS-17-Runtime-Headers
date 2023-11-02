
@protocol SBSceneViewControlling <NSObject>

@required

- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (long long)containerOrientation;
- (long long)contentOrientation;
- (struct CGSize { double x1; double x2; })contentReferenceSize;
- (UIView *)customContentView;
- (long long)displayMode;
- (void)invalidate;
- (FBSceneSnapshot *)newSnapshot;
- (UIView *)newSnapshotView;
- (void)newSnapshotViewOnQueue:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView *, void*
- (<SBScenePlaceholderContentContext> *)placeholderContentContext;
- (SBSceneHandle *)sceneHandle;
- (void)setContentReferenceSize:(struct CGSize { double x1; double x2; })arg1 withContentOrientation:(long long)arg2 andContainerOrientation:(long long)arg3;
- (void)setCustomContentView:(UIView *)arg1;
- (void)setDisplayMode:(void *)arg1 animationFactory:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: long long, BSUIAnimationFactory *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setPlaceholderContentContext:(id <SBScenePlaceholderContentContext>)arg1;

@end
