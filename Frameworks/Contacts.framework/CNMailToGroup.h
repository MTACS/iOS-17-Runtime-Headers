
@interface CNMailToGroup : NSObject {
    CNContactFormatter * _contactFormatter;
}

@property (nonatomic, retain) CNContactFormatter *contactFormatter;

+ (id)bestGuessEmailAddressForAddresses:(id)arg1 sendingAddressDomain:(id)arg2 alreadyDuetRanked:(bool)arg3;
+ (id)bestGuessEmailAddressForContact:(id)arg1;
+ (id)bestGuessEmailAddressForContact:(id)arg1 sendingAddressDomain:(id)arg2;
+ (id)descriptorForRequiredKeys;
+ (id)os_log;
+ (id)queryForEmailAddresses:(id)arg1;

- (void).cxx_destruct;
- (bool)allContactsHaveEmailAddress:(id)arg1;
- (id)bestGuessEmailAddressForContact:(id)arg1;
- (id)contactFormatter;
- (id)init;
- (id)mailUrlForContacts:(id)arg1;
- (id)mailUrlForContacts:(id)arg1 needsEmailAddresses:(bool)arg2;
- (id)mailUrlForMailingAddresses:(id)arg1;
- (id)mailUrlWithEmailAddressesForContacts:(id)arg1;
- (id)mailingAddressForContact:(id)arg1;
- (id)mailingAddressWithEmailForContact:(id)arg1;
- (id)santizeMailingAddress:(id)arg1;
- (void)setContactFormatter:(id)arg1;

@end
