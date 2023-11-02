
@interface RMManagedTrustStoreController : NSObject {
    NSString * _personaID;
    long long  _scope;
}

@property (nonatomic, copy) NSString *personaID;
@property (nonatomic) long long scope;

+ (id)newManagedTrustStoreControllerProtocolForScope:(long long)arg1 personaID:(id)arg2;

- (void).cxx_destruct;
- (id)initWithScope:(long long)arg1 personaID:(id)arg2;
- (id)personaID;
- (bool)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(bool)arg3 error:(id*)arg4;
- (long long)scope;
- (void)setPersonaID:(id)arg1;
- (void)setScope:(long long)arg1;
- (bool)setTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(bool)arg3 error:(id*)arg4;

@end
