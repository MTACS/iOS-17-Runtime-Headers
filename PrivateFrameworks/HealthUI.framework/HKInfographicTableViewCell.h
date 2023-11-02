
@interface HKInfographicTableViewCell : UITableViewCell {
    NSLayoutConstraint * _heightConstraint;
    UIView * _separator;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
    bool  hideSeparator;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)_labelWithFont:(id)arg1;
- (id)_titleFont;
- (id)_valueFont;
- (id)heightConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)separator;
- (void)setHeightConstraint:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (id)titleLabel;
- (id)valueLabel;

@end
