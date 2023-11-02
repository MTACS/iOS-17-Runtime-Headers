
@interface PKAccountTableCell : PSTableCell {
    UIImageView * _iconImageView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

+ (double)estimatedHeightForCell;
+ (id)subtitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_configureCellForAccount:(id)arg1;
- (id)_subtitleColorForAccountState:(unsigned long long)arg1;
- (id)_subtitleForAccount:(id)arg1;
- (id)_titleForAccount:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)setSpecifier:(id)arg1;

@end
