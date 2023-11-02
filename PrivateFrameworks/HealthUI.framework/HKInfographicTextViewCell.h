
@interface HKInfographicTextViewCell : UITableViewCell {
    UILabel * _descriptionLabel;
    NSLayoutConstraint * _heightConstraint;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;

- (void).cxx_destruct;
- (id)_descriptionFont;
- (id)_descriptionTextColor;
- (id)_labelWithFont:(id)arg1;
- (id)descriptionLabel;
- (id)heightConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDescriptionLabel:(id)arg1;
- (void)setHeightConstraint:(id)arg1;

@end
