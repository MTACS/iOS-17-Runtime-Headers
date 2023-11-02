
@interface GKContactDataSource : NSObject {
    NSDictionary * _contactLookup;
    NSArray * _contacts;
    NSArray * _sectionHeaders;
    NSDictionary * _sectionToContactIndexes;
    NSDictionary * _skipToContactIndexes;
    NSArray * _skipValues;
    CNContactStore * _store;
}

@property (nonatomic, retain) NSDictionary *contactLookup;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, retain) NSArray *sectionHeaders;
@property (nonatomic, retain) NSDictionary *sectionToContactIndexes;
@property (nonatomic, retain) NSDictionary *skipToContactIndexes;
@property (nonatomic, retain) NSArray *skipValues;
@property (nonatomic, retain) CNContactStore *store;

- (void).cxx_destruct;
- (id)contactLookup;
- (id)contacts;
- (id)fullContactWithIdentifier:(id)arg1;
- (id)init;
- (void)loadContactsWithHandler:(id /* block */)arg1;
- (id)sectionHeaders;
- (id)sectionToContactIndexes;
- (void)setContactLookup:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setSectionHeaders:(id)arg1;
- (void)setSectionToContactIndexes:(id)arg1;
- (void)setSkipToContactIndexes:(id)arg1;
- (void)setSkipValues:(id)arg1;
- (void)setStore:(id)arg1;
- (id)skipToContactIndexes;
- (id)skipValues;
- (id)store;

@end
