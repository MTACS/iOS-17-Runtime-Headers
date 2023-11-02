
@interface SFPrivateRelayPromptBannerCell : UICollectionViewCell <UITextViewDelegate> {
    SFBannerBackgroundView * _backgroundView;
    UIButton * _dismissButton;
    id /* block */  _dismissHandler;
    UITextView * _messageLabel;
    UILabel * _titleLabel;
    UIButton * _turnOnButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *message;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIButton *turnOnButton;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_attributedStringForMessage:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)_turnOnPrivateRelay:(id)arg1;
- (void)_updateTurnOnButtonConfiguration;
- (void)configureUsingBanner:(id)arg1;
- (id /* block */)dismissHandler;
- (id)focusEffect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTurnOnButton:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)title;
- (id)turnOnButton;

@end
