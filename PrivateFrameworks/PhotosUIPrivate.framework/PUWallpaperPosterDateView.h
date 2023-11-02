
@interface PUWallpaperPosterDateView : UIView {
    UIFont * _effectiveTimeFont;
    UIColor * _timeColor;
    UIFont * _timeFont;
    UILabel * _timeLabel;
    bool  _useThinnerFontWeightForTime;
    bool  _useVibrantAppearance;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIFont *effectiveTimeFont;
@property (nonatomic, retain) UIColor *timeColor;
@property (nonatomic, retain) UIFont *timeFont;
@property (nonatomic, readonly) UILabel *timeLabel;
@property (nonatomic) bool useThinnerFontWeightForTime;
@property (nonatomic) bool useVibrantAppearance;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_initViews;
- (void)_updateTimeLabel;
- (id)effectiveTimeFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutWithLayout:(id)arg1 inContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setEffectiveTimeFont:(id)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeFont:(id)arg1;
- (void)setUseThinnerFontWeightForTime:(bool)arg1;
- (void)setUseVibrantAppearance:(bool)arg1;
- (id)timeColor;
- (id)timeFont;
- (id)timeLabel;
- (bool)useThinnerFontWeightForTime;
- (bool)useVibrantAppearance;
- (id)visualEffectView;

@end
