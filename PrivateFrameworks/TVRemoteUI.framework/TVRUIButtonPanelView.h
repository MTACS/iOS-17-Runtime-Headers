
@interface TVRUIButtonPanelView : UIView {
    <_TVRUIEventDelegate> * _buttonEventDelegate;
    NSMutableArray * _leftButtons;
    TVRUIPagingButton * _pagingButton;
    bool  _pagingEnabled;
    TVRUIButton * _primaryButton;
    NSMutableArray * _rightButtons;
    <TVRUIStyleProvider> * _styleProvider;
}

@property (nonatomic) <_TVRUIEventDelegate> *buttonEventDelegate;
@property (nonatomic, retain) NSMutableArray *leftButtons;
@property (nonatomic, retain) TVRUIPagingButton *pagingButton;
@property (getter=isPagingEnabled, nonatomic) bool pagingEnabled;
@property (nonatomic, retain) TVRUIButton *primaryButton;
@property (nonatomic, retain) NSMutableArray *rightButtons;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_configureButton:(id)arg1;
- (void)_disableButton:(id)arg1 changeAlpha:(bool)arg2;
- (void)_enableButton:(id)arg1;
- (id)_processButtons:(id)arg1;
- (id)_searchButton;
- (void)_sendButtonPressed:(long long)arg1;
- (void)_sendButtonReleased:(long long)arg1;
- (void)_sendButtonTapped:(long long)arg1;
- (id)buttonEventDelegate;
- (void)disableButtons:(bool)arg1;
- (void)disableSearchButton;
- (void)enableButtonsForDevice:(id)arg1;
- (void)enableSearchButton;
- (id)initPagedPanelWithPrimaryButtonType:(long long)arg1 secondaryLeftButtons:(id)arg2 styleProvider:(id)arg3;
- (id)initWithPrimaryButtonType:(long long)arg1 secondaryLeftButtons:(id)arg2 secondaryRightButtons:(id)arg3 styleProvider:(id)arg4;
- (bool)isPagingEnabled;
- (void)layoutSubviews;
- (id)leftButtons;
- (id)pagingButton;
- (id)primaryButton;
- (id)rightButtons;
- (void)setButtonEventDelegate:(id)arg1;
- (void)setLeftButtons:(id)arg1;
- (void)setPagingButton:(id)arg1;
- (void)setPagingEnabled:(bool)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setRightButtons:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
