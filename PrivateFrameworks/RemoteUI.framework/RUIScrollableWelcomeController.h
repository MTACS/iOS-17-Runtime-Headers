
@interface RUIScrollableWelcomeController : OBWelcomeController <_UIScrollViewLayoutObserver> {
    UIViewController * _contentController;
    UIScrollView * _contentScrollView;
    RUIScrollViewWeakLayoutObserver * _scrollViewLayoutObserver;
    bool  _shouldUseCustomButtonTray;
}

@property (nonatomic, retain) UIViewController *contentController;
@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (nonatomic) bool shouldAdjustButtonTrayForKeyboard;
@property (nonatomic) bool shouldAdjustScrollViewInsetForKeyboard;
@property (nonatomic) bool shouldUseCustomButtonTray;

- (void).cxx_destruct;
- (void)_inlineButtonTray;
- (void)_layoutButtonTray;
- (void)_setupScrollView;
- (void)_updateHeaderTopOffsetConstraint;
- (id)contentController;
- (id)contentScrollView;
- (id)scrollView;
- (void)setContentController:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setShouldUseCustomButtonTray:(bool)arg1;
- (bool)shouldUseCustomButtonTray;

@end
