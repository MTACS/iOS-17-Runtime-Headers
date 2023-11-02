
@interface HKInfographicContentViewCell : UITableViewCell {
    UILabel * _descriptionLabel;
    NSLayoutConstraint * _heightConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_descriptionFont;
- (id)_labelWithFont:(id)arg1;
- (id)_titleFont;
- (id)descriptionLabel;
- (id)heightConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDescriptionLabel:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
