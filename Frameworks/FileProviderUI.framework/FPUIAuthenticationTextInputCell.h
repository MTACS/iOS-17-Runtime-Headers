
@interface FPUIAuthenticationTextInputCell : UITableViewCell {
    UILabel * _label;
    UIStackView * _stackView;
    UITextField * _textField;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (bool)_isLargeTextTraitCollection:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)prepareForReuse;
- (id)textField;
- (void)updateForChangedContentSizeCategory;

@end
