
@interface ACDMockManagedDataclass : ACDManagedDataclass {
    NSSet * enabledAccounts;
    NSString * name;
    NSSet * provisionedAccounts;
    NSSet * supportedTypes;
    NSSet * syncableTypes;
}

- (void).cxx_destruct;
- (id)enabledAccounts;
- (id)name;
- (id)provisionedAccounts;
- (void)setEnabledAccounts:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProvisionedAccounts:(id)arg1;
- (void)setSupportedTypes:(id)arg1;
- (void)setSyncableTypes:(id)arg1;
- (id)supportedTypes;
- (id)syncableTypes;

@end
