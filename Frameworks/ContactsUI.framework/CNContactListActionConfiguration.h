
@interface CNContactListActionConfiguration : NSObject {
    CNContactFormatter * _contactFormatter;
    CNContactStore * _contactStore;
    CNContactStoreFilter * _contactStoreFilter;
    CNContactViewCache * _contactViewCache;
    CNUIContactsEnvironment * _environment;
}

@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContactStoreFilter *contactStoreFilter;
@property (nonatomic, retain) CNContactViewCache *contactViewCache;
@property (nonatomic, retain) CNUIContactsEnvironment *environment;

+ (id)log;

- (void).cxx_destruct;
- (id)contactFormatter;
- (id)contactStore;
- (id)contactStoreFilter;
- (id)contactViewCache;
- (id)containerForContainerIdentifier:(id)arg1;
- (id)environment;
- (void)setContactFormatter:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactStoreFilter:(id)arg1;
- (void)setContactViewCache:(id)arg1;
- (void)setEnvironment:(id)arg1;

@end
