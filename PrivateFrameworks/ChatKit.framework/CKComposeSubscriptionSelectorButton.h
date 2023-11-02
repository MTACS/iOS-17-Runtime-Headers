
@interface CKComposeSubscriptionSelectorButton : UIButton {
    TPBadgeView * _badgeView;
    UILabel * _buttonTitleLabel;
    <CKComposeSubscriptionSelectorButtonDelegate> * _delegate;
    UITapGestureRecognizer * _gestureRecognizer;
    UIStackView * _stackView;
    unsigned long long  _theme;
}

@property (nonatomic, retain) TPBadgeView *badgeView;
@property (nonatomic, retain) UILabel *buttonTitleLabel;
@property (nonatomic) <CKComposeSubscriptionSelectorButtonDelegate> *delegate;
@property (nonatomic, readonly) UITapGestureRecognizer *gestureRecognizer;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic) unsigned long long theme;

- (void).cxx_destruct;
- (id)badgeView;
- (id)buttonTitleLabel;
- (id)delegate;
- (id)gestureRecognizer;
- (void)handleTap:(id)arg1;
- (id)init;
- (void)loadConstraintsForButton;
- (void)setBadgeView:(id)arg1;
- (void)setButtonTitleLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTheme:(unsigned long long)arg1;
- (id)stackView;
- (unsigned long long)theme;
- (void)updateContentsWithTitle:(id)arg1 badgeText:(id)arg2 theme:(unsigned long long)arg3;
- (void)updateTheme;
- (void)updateTitleFont:(id)arg1;

@end
