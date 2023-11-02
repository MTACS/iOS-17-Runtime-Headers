
@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {
    unsigned long long  _credentials;
    NSString * _entitlement;
}

@property (nonatomic, readonly) unsigned long long credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)_authenticateAuditToken:(id)arg1 entitlement:(id)arg2 credentials:(unsigned long long)arg3 error:(out id*)arg4 withResult:(id /* block */)arg5;
+ (id)_errorForCode:(int)arg1 process:(id)arg2 failedEntitlement:(id)arg3;
+ (bool)authenticateAuditToken:(struct { unsigned int x1[8]; })arg1 forEntitlement:(id)arg2 error:(out id*)arg3;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;

- (void).cxx_destruct;
- (bool)authenticateAuditToken:(id)arg1;
- (bool)authenticateAuditToken:(id)arg1 error:(out id*)arg2;
- (bool)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 forEntitlement:(id)arg2 withResult:(id /* block */)arg3;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 withResult:(id /* block */)arg2;
- (bool)authenticateClient:(id)arg1;
- (bool)authenticateClient:(id)arg1 error:(out id*)arg2;
- (int)authenticateClient:(id)arg1 withResult:(id /* block */)arg2;
- (unsigned long long)credentials;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)entitlement;
- (id)init;
- (id)initWithCredentials:(unsigned long long)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
