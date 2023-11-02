
@interface KeychainSyncPhoneSettingsFragment : NSObject {
    KeychainSyncCountryInfo * _countryInfo;
    PSSpecifier * _countrySpecifier;
    <KeychainSyncPhoneSettingsFragmentDelegate> * _delegate;
    PSListController * _listController;
    NSString * _phoneNumber;
    PSPhoneNumberSpecifier * _phoneNumberSpecifier;
    NSArray * _specifiers;
    NSString * _title;
}

@property (nonatomic, retain) KeychainSyncCountryInfo *countryInfo;
@property (nonatomic) <KeychainSyncPhoneSettingsFragmentDelegate> *delegate;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) PSEditableTableCell *phoneNumberCell;
@property (nonatomic, readonly) NSArray *specifiers;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)countryInfo;
- (void)dealloc;
- (id)delegate;
- (id)dialingCountryInfoForSpecifier:(id)arg1;
- (id)initWithListController:(id)arg1;
- (id)phoneNumber;
- (id)phoneNumberCell;
- (id)phoneNumberForSpecifier:(id)arg1;
- (void)reloadSpecifiers;
- (void)resignFirstResponder;
- (void)setCountryInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)specifiers;
- (void)textFieldChanged:(id)arg1;
- (id)title;
- (id)unformattedPhoneNumber;

@end
