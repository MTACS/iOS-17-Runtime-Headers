
@interface AKAuthorizationBulletPointSubPane : AKAuthorizationSubPane {
    UIView * _baseView;
    UIImageView * _bulletImageView;
    UILabel * _messageLabel;
    UIStackView * _messageStackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIView *baseView;
@property (nonatomic, readonly) UIImageView *bulletImageView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) UIStackView *messageStackView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_iconColor;
- (id)_imageViewWithImage:(id)arg1;
- (id)_labelWithString:(id)arg1 title:(bool)arg2;
- (struct CGSize { double x1; double x2; })_sizeForBulletImage:(id)arg1;
- (id)_verticalStackView;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (id)baseView;
- (id)bulletImageView;
- (id)image;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)message;
- (id)messageLabel;
- (id)messageStackView;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleLabel;

@end
