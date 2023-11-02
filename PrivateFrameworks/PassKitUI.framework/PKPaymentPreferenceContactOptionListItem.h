
@interface PKPaymentPreferenceContactOptionListItem : PKPaymentPreferenceOptionListItem

@property (nonatomic, readonly) CNContact *contactPreference;
@property (nonatomic, readonly) PKPaymentPreferenceContact *contactSectionPreference;

- (id)_inlineEditingConfiguration;
- (bool)_isEmail;
- (bool)_isHideMyEmail;
- (bool)_isPhoneNumber;
- (bool)_isPostalAddress;
- (id)_placeholderText;
- (id)_secondaryText;
- (bool)_supportsDeleteAction;
- (bool)_supportsEditAction;
- (bool)_supportsEditing;
- (id)_text;
- (id)contactPreference;
- (id)contactSectionPreference;
- (id)defaultAccessories;
- (bool)supportsInlineEditing;

@end
