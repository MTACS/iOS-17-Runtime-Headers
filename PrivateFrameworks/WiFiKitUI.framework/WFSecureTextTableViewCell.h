
@interface WFSecureTextTableViewCell : UITableViewCell {
    NSString * _credentials;
    bool  _hideSecureText;
    UIFont * _placeholderFont;
}

@property (nonatomic, copy) NSString *credentials;
@property (nonatomic) bool hideSecureText;
@property (nonatomic, copy) UIFont *placeholderFont;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (bool)canBecomeFirstResponder;
- (id)credentials;
- (bool)hideSecureText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)placeholderFont;
- (void)setCredentials:(id)arg1;
- (void)setHideSecureText:(bool)arg1;
- (void)setPlaceholderFont:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
