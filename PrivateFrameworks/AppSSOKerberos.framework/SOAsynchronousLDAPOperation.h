
@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation {
    NSString * _bundleIdentifier;
    id /* block */  _completion;
    NSString * _host;
    unsigned short  _port;
    NSString * _realm;
    bool  _requireTLSForLDAP;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (copy) id /* block */ completion;
@property (nonatomic, retain) NSString *host;
@property (nonatomic) unsigned short port;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic) bool requireTLSForLDAP;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id /* block */)completion;
- (id)host;
- (id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andRequireTLSForLDAP:(bool)arg5 andCompletion:(id /* block */)arg6;
- (void)main;
- (unsigned short)port;
- (id)realm;
- (bool)requireTLSForLDAP;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned short)arg1;
- (void)setRealm:(id)arg1;
- (void)setRequireTLSForLDAP:(bool)arg1;

@end
