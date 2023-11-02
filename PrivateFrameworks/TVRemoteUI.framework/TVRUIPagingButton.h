
@interface TVRUIPagingButton : UIView {
    TVRUIButton * _bottomButton;
    <_TVRUIEventDelegate> * _buttonEventDelegate;
    bool  _enabled;
    <TVRUIStyleProvider> * _styleProvider;
    UILabel * _titleLabel;
    TVRUIButton * _topButton;
}

@property (nonatomic, retain) TVRUIButton *bottomButton;
@property (nonatomic) <_TVRUIEventDelegate> *buttonEventDelegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) TVRUIButton *topButton;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (void)_darkenSystemColorsChanged:(id)arg1;
- (id)bottomButton;
- (id)buttonEventDelegate;
- (id)initWithTitle:(id)arg1 styleProvider:(id)arg2;
- (bool)isEnabled;
- (void)setBottomButton:(id)arg1;
- (void)setButtonEventDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopButton:(id)arg1;
- (id)styleProvider;
- (id)titleLabel;
- (id)topButton;

@end
