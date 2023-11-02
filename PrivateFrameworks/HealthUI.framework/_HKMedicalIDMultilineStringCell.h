
@interface _HKMedicalIDMultilineStringCell : UITableViewCell {
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateTextColor;
- (void)dealloc;
- (id)description;
- (id)detailLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDetailLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setupSubviews;
- (void)tintColorDidChange;
- (id)titleLabel;

@end
