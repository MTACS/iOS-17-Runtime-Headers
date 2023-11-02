
@interface LSApplicationIdentityMigrationResult : NSObject {
    NSMutableDictionary * _migratedIdentities;
}

- (void).cxx_destruct;
- (id)bestMigratedIdentityForIdentity:(id)arg1;
- (id)init;
- (id)migratedIdentitiesForIdentity:(id)arg1;

@end
