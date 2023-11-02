
@interface FMFContactUtility : NSObject {
    CNContactFormatter * _contactFormatter;
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNContactStore *contactStore;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)contactFormatter;
- (id)contactKeys;
- (id)contactStore;
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;
- (id)findOptimalContactInContacts:(id)arg1;
- (id)getContactForHandle:(id)arg1;
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;
- (void)setContactFormatter:(id)arg1;
- (void)setContactStore:(id)arg1;
- (id)shortDisplayNameForContact:(id)arg1 andHandle:(id)arg2;

@end
