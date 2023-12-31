
@interface _UIWebViewScrollView : UIWebScrollView {
    bool  _bouncesSetExplicitly;
    UIWebBrowserView * _browserView;
    bool  _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    _UIWebViewScrollViewDelegateForwarder * _forwarder;
}

- (bool)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;
- (void)_setWebView:(id)arg1;
- (void)_weaklySetBouncesHorizontally:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounces:(bool)arg1;
- (void)setBouncesHorizontally:(bool)arg1;
- (void)setBouncesVertically:(bool)arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
