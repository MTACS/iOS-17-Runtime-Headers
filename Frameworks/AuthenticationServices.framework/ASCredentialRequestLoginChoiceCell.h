
@interface ASCredentialRequestLoginChoiceCell : UITableViewCell {
    AKASAuthorizationProvider * _authorizationProvider;
    UILabel * _detailLabel;
    UIStackView * _iconAndTextStackView;
    UIImageView * _iconImageView;
    bool  _isSelectedLoginChoice;
    <ASCLoginChoiceProtocol> * _loginChoice;
    ASCAuthorizationPresentationContext * _presentationContext;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *detailText;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic) bool isSelectedLoginChoice;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (double)_additionalLeadingSeparatorInset;
- (id)_cableIcon;
- (void)_configureIconImageStyle;
- (void)_configureImageViewForAppIcon;
- (void)_configureImageViewForSymbolImage;
- (id)_defaultPasskeyIcon;
- (id)_detailTextForExternalPasswordLoginChoice:(id)arg1;
- (id)_detailTextForPasswordLoginChoice:(id)arg1;
- (id)_detailTextForPasswordLoginChoiceFromKeychain:(id)arg1;
- (id)_emptyRadioButtonImage;
- (id)_publicKeyCredentialImageForPresentationContext:(id)arg1;
- (id)_selectedRadioButtonImage;
- (void)_setUpAccessoryImageView;
- (void)_setUpContent;
- (void)_setUpFormat;
- (bool)_shouldUseAppIconImageViewStyle;
- (id)_subtitleForPublicKeyCredentialAssertion;
- (id)_titleForPublicKeyCredentialAssertionWithName:(id)arg1 identifier:(id)arg2;
- (void)_updateAccessoryImageView;
- (void)_updateLayoutForCurrentContentSizeCategory;
- (id)detailText;
- (id)iconImage;
- (id)initWithLoginChoice:(id)arg1 presentationContext:(id)arg2 authorizationProvider:(id)arg3;
- (bool)isSelectedLoginChoice;
- (void)setDetailText:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIsSelectedLoginChoice:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
