
@interface ML3AccountStore : NSObject <_MSVAccountInformationProviding>

@property (nonatomic, readonly, copy) NSString *accountDSID;
@property (nonatomic, readonly) ACAccount *activeAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultStore;

- (id)_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)_init;
- (id)accountDSID;
- (id)activeAccount;
- (id)altDSIDForAccountWithDSID:(long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
