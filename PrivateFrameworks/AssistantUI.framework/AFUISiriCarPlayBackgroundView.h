
@interface AFUISiriCarPlayBackgroundView : UIView {
    long long  _backgroundViewMode;
    <AFUISiriCarPlayBackgroundViewDelegate> * _delegate;
    AFUISiriCarPlayFullScreenBackgroundView * _fullScreenBackgroundView;
    UIView * _systemBackgroundView;
    bool  _visible;
}

@property (nonatomic) long long backgroundViewMode;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_animateBackgroundsWithVisibility:(bool)arg1 backgroundViewMode:(long long)arg2;
- (void)_updateCarPlayStatusBarForVisibility:(bool)arg1 backgroundViewMode:(long long)arg2;
- (void)_updateViewsForVisibility:(bool)arg1 backgroundViewMode:(long long)arg2;
- (long long)backgroundViewMode;
- (id)initWithDelegate:(id)arg1;
- (bool)isVisible;
- (void)setBackgroundViewMode:(long long)arg1;
- (void)setVisible:(bool)arg1;

@end
