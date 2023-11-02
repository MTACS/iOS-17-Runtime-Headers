
@interface MKContactMigrator : MKMigrator {
    CNContactStore * _contactStore;
}

- (void).cxx_destruct;
- (void)import:(id)arg1;
- (void)importVCard:(id)arg1;
- (id)init;

@end
