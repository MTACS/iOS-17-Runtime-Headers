
@interface PKRewardsTierTableViewCell : UITableViewCell {
    <PKRewardsTierTableViewCellDelegate> * _delegate;
    bool  _isTemplateLayout;
    NSString * _link;
    UIButton * _linkButton;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    UIImageView * _tierIcon;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) <PKRewardsTierTableViewCellDelegate> *delegate;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) UIImageView *tierIcon;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)link;
- (void)linkAction;
- (void)setDelegate:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)tierIcon;
- (id)title;

@end
