
@interface CKDetonatedAttachmentView : UIView {
    UIImageView * _iconImageView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIImageView *iconImageView;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)attachmentIcon;

- (void).cxx_destruct;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
