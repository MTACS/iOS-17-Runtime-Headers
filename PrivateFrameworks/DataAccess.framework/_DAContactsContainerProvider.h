
@interface _DAContactsContainerProvider : DAContainerProvider {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)allContainers;
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;
- (id)contactStore;
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(bool)arg6 propertiesReadonly:(bool)arg7 forAccount:(id)arg8;
- (id)initWithContactStore:(id)arg1;
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(bool)arg3;
- (bool)setLastSyncDateForContainer:(id)arg1;

@end
