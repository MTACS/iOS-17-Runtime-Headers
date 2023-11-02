
@interface TVRUIChannelButton : UIView {
    TVRUIPageButton * _bottomButton;
    <_TVRUIEventDelegate> * _buttonEventDelegate;
    UIView * _contentView;
    bool  _enabled;
    bool  _isAnimating;
    bool  _isExpanded;
    <TVRUIStyleProvider> * _styleProvider;
    UILabel * _titleLabel;
    TVRUIPageButton * _topButton;
}

@property (nonatomic, retain) TVRUIPageButton *bottomButton;
@property (nonatomic) <_TVRUIEventDelegate> *buttonEventDelegate;
@property (nonatomic, retain) UIView *contentView;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool isAnimating;
@property (nonatomic) bool isExpanded;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) TVRUIPageButton *topButton;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (id)_channelUpButton;
- (void)_darkenSystemColorsChanged:(id)arg1;
- (id)_newSpringAnimation;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForLeftWingExpanded:(bool)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForRightWingExpanded:(bool)arg1;
- (id)bottomButton;
- (id)buttonEventDelegate;
- (id)chevronLeftWingAnimationExpand:(bool)arg1;
- (id)chevronRightWingAnimationExpand:(bool)arg1;
- (void)collapse;
- (id)contentView;
- (void)expand;
- (id)initWithTitle:(id)arg1 styleProvider:(id)arg2;
- (bool)isAnimating;
- (bool)isEnabled;
- (bool)isExpanded;
- (void)layoutSubviews;
- (void)setBottomButton:(id)arg1;
- (void)setButtonEventDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopButton:(id)arg1;
- (id)styleProvider;
- (id)titleLabel;
- (id)topButton;

@end
