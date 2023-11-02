
@interface NANowPlayingIndicatorView : UIControl {
    long long  _bounceStyle;
    double  _interLevelSpacing;
    double  _levelCornerRadius;
    UIColor * _levelGuttersColor;
    NSMutableArray * _levelViews;
    double  _levelWidth;
    double  _maximumLevelHeight;
    double  _minimumLevelHeight;
    long long  _numberOfLevels;
    long long  _playbackState;
    bool  _showsLevelGutters;
    bool  bufferingShouldDisplayAsPaused;
}

@property (nonatomic) long long bounceStyle;
@property (nonatomic) double interLevelSpacing;
@property (nonatomic) double levelCornerRadius;
@property (nonatomic, retain) UIColor *levelGuttersColor;
@property (nonatomic) double levelWidth;
@property (nonatomic) double maximumLevelHeight;
@property (nonatomic) double minimumLevelHeight;
@property (nonatomic) long long numberOfLevels;
@property (nonatomic) long long playbackState;
@property (nonatomic) bool showsLevelGutters;

- (void).cxx_destruct;
- (void)_bufferTimerFired;
- (double)_fixedSeedValueForBarIndex:(unsigned long long)arg1;
- (double)_randomSeedValueForBar;
- (void)_reloadLevelViews;
- (void)_removeAllAnimations:(bool)arg1;
- (double)_seedValueForBarIndex:(unsigned long long)arg1;
- (void)_updateLevelAnimations;
- (long long)bounceStyle;
- (bool)canBecomeFocused;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interLevelSpacing;
- (void)layoutSubviews;
- (double)levelCornerRadius;
- (id)levelGuttersColor;
- (double)levelWidth;
- (double)maximumLevelHeight;
- (double)minimumLevelHeight;
- (long long)numberOfLevels;
- (long long)playbackState;
- (void)setBounceStyle:(long long)arg1;
- (void)setInterLevelSpacing:(double)arg1;
- (void)setLevelCornerRadius:(double)arg1;
- (void)setLevelGuttersColor:(id)arg1;
- (void)setLevelWidth:(double)arg1;
- (void)setMaximumLevelHeight:(double)arg1;
- (void)setMinimumLevelHeight:(double)arg1;
- (void)setNumberOfLevels:(long long)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setShowsLevelGutters:(bool)arg1;
- (bool)showsLevelGutters;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
