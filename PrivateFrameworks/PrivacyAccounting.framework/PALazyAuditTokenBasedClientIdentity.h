
@interface PALazyAuditTokenBasedClientIdentity : NSObject <PAIdentityWrapper> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSObject<OS_tcc_identity> * _identity;
    bool  _identityResolved;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_tcc_identity> *identity;
@property (getter=isIdentityResolved, nonatomic, readonly) bool identityResolved;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)description;
- (id)identity;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)isIdentityResolved;

@end
