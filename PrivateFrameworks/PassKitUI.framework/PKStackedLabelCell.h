
@interface PKStackedLabelCell : PKTableViewCell {
    UIImage * _detailImage;
    UIImageView * _detailImageView;
    UILabel * _detailLabel;
    NSString * _detailText;
    UIColor * _detailTextColor;
    bool  _isRTL;
    UILabel * _titleLabel;
    NSString * _titleText;
    UIColor * _titleTextColor;
}

@property (nonatomic, retain) UIImage *detailImage;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (void)_applyLabelStyles;
- (id)detailImage;
- (id)detailText;
- (id)detailTextColor;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDetailImage:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleText;
- (id)titleTextColor;
- (void)traitCollectionDidChange:(id)arg1;

@end
