
@interface WBSSecIdentitiesCache : NSObject {
    NSMutableDictionary * _domainsToIdentities;
}

- (void).cxx_destruct;
- (id)init;
- (struct __SecIdentity { }*)secIdentityForDomain:(id)arg1;
- (void)setSecIdentity:(struct __SecIdentity { }*)arg1 forDomain:(id)arg2;

@end
