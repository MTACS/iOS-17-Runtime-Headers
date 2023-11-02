
@interface ACDClientAuthorizationManager : NSObject {
    ACDDatabaseConnection * _databaseConnection;
}

- (void).cxx_destruct;
- (id)_csvStringFromSet:(id)arg1;
- (id)_setFromCSVString:(id)arg1;
- (id)allAuthorizationsForAccountType:(id)arg1;
- (id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg1;
- (id)authorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)authorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2;
- (id)initWithDatabaseConnection:(id)arg1;
- (id)removeAllClientAuthorizationsForAccountType:(id)arg1;
- (id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg1;
- (id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)removeAuthorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2;
- (id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3;

@end
