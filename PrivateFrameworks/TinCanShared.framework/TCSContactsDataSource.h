
@interface TCSContactsDataSource : NSObject <TCSContactsObserver> {
    NSMutableSet * _allowedContactIdentifiers;
    NSDictionary * _allowedContactMap;
    CNContactStore * _contactStore;
    TCSContacts * _contacts;
    <TCSContactsDataSourceDelegate> * _delegate;
    NSDictionary * _inviteeContactMap;
    NSMutableSet * _inviterContactIdentifiers;
    NSDictionary * _inviterContactMap;
    int  _namePrefChangeToken;
    NSArray * _sortedContacts;
    NSArray * _sortedInvitees;
    NSArray * _sortedInviters;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) TCSContacts *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TCSContactsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sectionCount;
@property (nonatomic, retain) NSArray *sortedContacts;
@property (nonatomic, retain) NSArray *sortedInvitees;
@property (nonatomic, retain) NSArray *sortedInviters;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)_contactArray:(id)arg1 differsFromArray:(id)arg2;
- (id)_contactMapFromArray:(id)arg1;
- (id)_contactsForSection:(long long)arg1;
- (void)_handleContactStoreDidChange:(id)arg1;
- (void)_handleDeviceFirstUnlock;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_notifyDelegateContactsChanged;
- (void)_notifyDelegateRecencyChanged;
- (long long)_sectionForContact:(id)arg1;
- (id)_sortedContactsArrayFromArray:(id)arg1;
- (id)_sortedContactsArrayFromArray:(id)arg1 forSection:(long long)arg2;
- (id)_unsortedContactsArray;
- (void)_updateSortedContactsAndNotifyIfChanged:(bool)arg1;
- (void)contactBecameAccepted:(id)arg1;
- (id)contactStore;
- (id)contactWithIdentifier:(id)arg1;
- (id)contacts;
- (void)dealloc;
- (id)delegate;
- (void)destinationsDidChange:(id)arg1;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2;
- (long long)inviteContact:(id)arg1;
- (bool)isContactAllowed:(id)arg1;
- (bool)isContactAnInviter:(id)arg1;
- (void)logSortedContacts;
- (void)recencyDidChange:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)removeContact:(id)arg1 inSection:(long long)arg2;
- (unsigned long long)sectionCount;
- (void)setDelegate:(id)arg1;
- (void)setSortedContacts:(id)arg1;
- (void)setSortedInvitees:(id)arg1;
- (void)setSortedInviters:(id)arg1;
- (id)sortedContacts;
- (id)sortedInvitees;
- (id)sortedInviters;

@end
