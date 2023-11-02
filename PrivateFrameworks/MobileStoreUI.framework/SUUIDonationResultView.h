
@interface SUUIDonationResultView : UIView {
    UIImageView * _imageView;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)image;
- (void)layoutSubviews;
- (id)message;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
