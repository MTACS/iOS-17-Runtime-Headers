
@interface QPAccountsManager : NSObject {
    NSArray * _accountTypes;
    CNContactStoreConfiguration * _contactsConfiguration;
    NSArray * _contentsArray;
}

@property (nonatomic, retain) NSArray *accountTypes;
@property (nonatomic, retain) CNContactStoreConfiguration *contactsConfiguration;
@property (retain) NSArray *contentsArray;

+ (id)sharedAccountsManager;

- (void).cxx_destruct;
- (id)accountTypes;
- (id)contactsConfiguration;
- (id)contentsArray;
- (id)nameToEmailAddresses;
- (void)setAccountTypes:(id)arg1;
- (void)setContactsConfiguration:(id)arg1;
- (void)setContentsArray:(id)arg1;
- (void)update:(id)arg1;

@end
