
@interface SUSSoftwareUpdateProactiveSuggestionCell : PSTableCell {
    UILabel * _contentLabel;
    UIImageView * _iconImage;
    NSArray * _titleAndContentVerticalConstaints;
    UILabel * _titleLabel;
    NSArray * _titleOnlyVerticalConstaints;
}

- (void).cxx_destruct;
- (id)_configureContentLabel;
- (id)_configureIconImage;
- (id)_configureTitleLabel;
- (void)_setupView;
- (id)content;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setContent:(id)arg1;
- (void)setSystemIconNamed:(id)arg1 withTintColor:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)title;

@end
