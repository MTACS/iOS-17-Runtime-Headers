
@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {
    long long  _activePressType;
    bool  _hasBeenModified;
    UIView * _originalView;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) long long activePressType;
@property (nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (void)_addToViewIfAllowed:(id)arg1;
- (void)_resetToOriginalViewIfAllowed;
- (void)_setEnabledIfAllowed:(bool)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (long long)activePressType;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (id)scrollView;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setScrollView:(id)arg1;

@end
