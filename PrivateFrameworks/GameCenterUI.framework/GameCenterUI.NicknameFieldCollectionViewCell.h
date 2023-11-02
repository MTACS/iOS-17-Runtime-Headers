
@interface GameCenterUI.NicknameFieldCollectionViewCell : GameCenterUI.BaseCollectionViewCell <UITextFieldDelegate> {
    void accessoryAction;
    void disabled;
    void loadingIndicator;
    void nicknamePresenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  nicknameUpdatedSubscription;
    void previousTitleTextColor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  suggestionsChangedSubscription;
    void textLabel;
}

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *accessibilityTextLabel;

- (void).cxx_destruct;
- (id)accessibilityTextLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;

@end
