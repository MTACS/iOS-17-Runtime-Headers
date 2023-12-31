
@interface _UNMediaPlayPauseButton : UIControl {
    MTMaterialView * _backgroundCircle;
    _UNMaterialButton * _button;
    UIButton * _invisibleButton;
    long long  _type;
}

@property (nonatomic, retain) MTMaterialView *backgroundCircle;
@property (nonatomic, retain) _UNMaterialButton *button;
@property (nonatomic, retain) UIButton *invisibleButton;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateBackground;
- (void)_updateBackgroundForAudioStyle;
- (void)_updateBackgroundForMovieStyle;
- (void)_updateSelected;
- (void)_updateSelectedForAudioStyle;
- (void)_updateSelectedForMovieStyle;
- (void)_updateSize;
- (void)_updateSizeForAudioStyle;
- (void)_updateSizeForMovieStyle;
- (void)_updateStyle;
- (void)_updateStyleForAudioStyle;
- (void)_updateStyleForMovieStyle;
- (void)_updateType;
- (id)backgroundCircle;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 type:(long long)arg2;
- (id)invisibleButton;
- (void)layoutSubviews;
- (void)setBackgroundCircle:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setInvisibleButton:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)tintColorDidChange;
- (long long)type;

@end
