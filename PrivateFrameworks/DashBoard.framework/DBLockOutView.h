
@interface DBLockOutView : UIView {
    UITapGestureRecognizer * _backToOEMGestureRecognizer;
    UIStackView * _buttonStackView;
    <DBLockOutViewDelegate> * _delegate;
    DBEnvironmentConfiguration * _environmentConfiguration;
    UIImageView * _imageView;
    UILabel * _messageLabel;
    long long  _mode;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UITapGestureRecognizer *backToOEMGestureRecognizer;
@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic) <DBLockOutViewDelegate> *delegate;
@property (nonatomic, retain) DBEnvironmentConfiguration *environmentConfiguration;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_backToOEM;
- (id)_buttonFont;
- (id)_buttonOfType:(unsigned long long)arg1;
- (void)_buttonTapped:(id)arg1;
- (id)_buttonTitleForType:(unsigned long long)arg1;
- (id)_titleFont;
- (id)backToOEMGestureRecognizer;
- (id)buttonStackView;
- (id)delegate;
- (id)environmentConfiguration;
- (id)imageView;
- (id)initWithMode:(long long)arg1 environmentConfiguration:(id)arg2;
- (void)layoutSubviews;
- (id)messageLabel;
- (long long)mode;
- (void)setBackToOEMGestureRecognizer:(id)arg1;
- (void)setButtonStackView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnvironmentConfiguration:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
