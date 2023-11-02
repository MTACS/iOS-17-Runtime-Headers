
@interface CPUITransportControlView : UIView {
    double  _buttonHeight;
    double  _buttonSpacing;
    NSArray * _constraints;
    NSLayoutConstraint * _containerHeightConstraint;
    UIImage * _defaultFastForwardButtonImage;
    UIImage * _defaultLeftButtonImage;
    CPUIModernButton * _fastForwardButton;
    CPUIModernButton * _leftButton;
    NSString * _pauseButtonImageName;
    UIImage * _pauseImage;
    NSString * _playButtonImageName;
    UIImage * _playImage;
    CPUIModernButton * _playPauseButton;
    bool  _progressActive;
}

@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonSpacing;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) NSLayoutConstraint *containerHeightConstraint;
@property (nonatomic, retain) UIImage *defaultFastForwardButtonImage;
@property (nonatomic, retain) UIImage *defaultLeftButtonImage;
@property (nonatomic, readonly) CPUIModernButton *fastForwardButton;
@property (nonatomic, readonly) CPUIModernButton *leftButton;
@property (nonatomic, retain) NSString *pauseButtonImageName;
@property (nonatomic, retain) UIImage *pauseImage;
@property (nonatomic, retain) NSString *playButtonImageName;
@property (nonatomic, retain) UIImage *playImage;
@property (nonatomic, readonly) CPUIModernButton *playPauseButton;
@property (nonatomic) bool progressActive;

- (void).cxx_destruct;
- (void)_updatePlayPauseButton;
- (double)buttonHeight;
- (double)buttonSpacing;
- (id)constraints;
- (id)containerHeightConstraint;
- (id)defaultFastForwardButtonImage;
- (id)defaultLeftButtonImage;
- (id)fastForwardButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftButton;
- (id)pauseButtonImageName;
- (id)pauseImage;
- (id)playButtonImageName;
- (id)playImage;
- (id)playPauseButton;
- (bool)progressActive;
- (void)setButtonHeight:(double)arg1;
- (void)setButtonSpacing:(double)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContainerHeightConstraint:(id)arg1;
- (void)setDefaultFastForwardButtonImage:(id)arg1;
- (void)setDefaultLeftButtonImage:(id)arg1;
- (void)setPauseButtonImageName:(id)arg1;
- (void)setPauseImage:(id)arg1;
- (void)setPlayButtonImageName:(id)arg1;
- (void)setPlayImage:(id)arg1;
- (void)setProgressActive:(bool)arg1;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
