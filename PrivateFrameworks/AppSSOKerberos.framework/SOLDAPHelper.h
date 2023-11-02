
@interface SOLDAPHelper : NSObject {
    bool  _completionCalled;
    NSObject<OS_nw_connection> * _connection;
    bool  _isConnected;
    NSObject<OS_ldap_connection> * _ldap;
}

@property bool completionCalled;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic) bool isConnected;
@property (nonatomic, retain) NSObject<OS_ldap_connection> *ldap;

- (void).cxx_destruct;
- (bool)completionCalled;
- (void)connectToLDAPServer:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3 andRequireTLSForLDAP:(bool)arg4 completion:(id /* block */)arg5;
- (void)connectToLDAPService:(id)arg1 requireTLSForLDAP:(bool)arg2 bundleIdentifier:(id)arg3 inBackground:(bool)arg4 completion:(id /* block */)arg5;
- (void)connectToLDAPWithCompletion:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (bool)isConnected;
- (id)ldap;
- (void)queryforBaseDN:(id)arg1 andScope:(int)arg2 andAttributes:(id)arg3 withFilter:(id)arg4 completion:(id /* block */)arg5;
- (void)setCompletionCalled:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setLdap:(id)arg1;
- (void)setupLDAPconnection:(id)arg1 andPort:(unsigned short)arg2 andRequireTLSForLDAP:(bool)arg3 andBundleIdentifier:(id)arg4;
- (void)startLDAPWithCompletion:(id /* block */)arg1;
- (void)useDigestMD5Auth:(id)arg1 andPassword:(id)arg2;
- (void)useKerberosAuth:(struct gss_cred_id_t_desc_struct { }*)arg1 forSPN:(id)arg2;

@end
