
@interface _PKVisibilityBackdropView : _UIBackdropView {
    unsigned int  _animationCounter;
    <_PKVisibilityBackdropViewDelegate> * _delegate;
    long long  _style;
    unsigned int  _styleToken;
    bool  _updatingBackdropSettings;
    double  _visibility;
    double  _visibilityAnimationTarget;
}

@property (nonatomic) <_PKVisibilityBackdropViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_pkui_setVisibility:(double)arg1 animated:(bool)arg2;
- (void)_updateStyleIfNecessary;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 privateStyle:(long long)arg2;
- (void)pkui_accessibilitySettingsDidChange:(id)arg1;
- (void)pkui_commitBackdropSettings;
- (long long)pkui_preferredBackdropStyle;
- (void)pkui_setVisibility:(double)arg1 animated:(bool)arg2;
- (void)pkui_updateBackdropSettings;
- (double)pkui_visibility;
- (void)setDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
