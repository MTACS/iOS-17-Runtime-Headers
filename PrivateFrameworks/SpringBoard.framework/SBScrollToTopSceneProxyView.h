
@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView> {
    <SBScrollToTopSceneProxyViewDelegate> * _delegate;
    SBSceneHandle * _sceneHandle;
}

@property (nonatomic) <SBScrollToTopSceneProxyViewDelegate> *delegate;
@property (nonatomic, retain) SBSceneHandle *sceneHandle;

- (void).cxx_destruct;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (id)delegate;
- (void)didMoveToWindow;
- (bool)isScrollEnabled;
- (id)sceneHandle;
- (void)setDelegate:(id)arg1;
- (void)setSceneHandle:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
