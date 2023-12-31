
@interface SFContactAutoFillTableViewCell : UITableViewCell {
    UILabel * _categoryLabel;
    bool  _checked;
    UIButton * _checkmarkButton;
    UILabel * _optionLabel;
    bool  _usesDetailAppearance;
    SFContactAutoFillValue * _value;
}

@property (nonatomic) bool checked;
@property (nonatomic) bool usesDetailAppearance;

- (void).cxx_destruct;
- (bool)checked;
- (void)checkmarkButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setChecked:(bool)arg1;
- (void)setUsesDetailAppearance:(bool)arg1;
- (void)setValue:(id)arg1 property:(id)arg2;
- (bool)usesDetailAppearance;

@end
