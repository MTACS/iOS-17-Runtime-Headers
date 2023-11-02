
@interface LPYouTubePlayerWebView : WKWebView {
    bool  _allowFirstResponder;
}

@property (nonatomic) bool allowFirstResponder;

- (bool)allowFirstResponder;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)setAllowFirstResponder:(bool)arg1;

@end
