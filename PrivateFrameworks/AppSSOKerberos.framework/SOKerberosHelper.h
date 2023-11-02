
@interface SOKerberosHelper : NSObject

- (bool)_testForUPNForUser:(id)arg1;
- (struct gss_cred_id_t_desc_struct { }*)acquireCredentialForUPN:(id)arg1;
- (struct gss_cred_id_t_desc_struct { }*)acquireCredentialForUUID:(id)arg1;
- (bool)authenticate:(struct gss_cred_id_t_desc_struct { }*)arg1 toServer:(id)arg2 returningToken:(id*)arg3 andError:(id*)arg4;
- (bool)changePasswordForUPN:(id)arg1 realm:(id)arg2 withOldPassword:(id)arg3 withNewPassword:(id)arg4 withError:(id*)arg5;
- (struct gss_cred_id_t_desc_struct { }*)createCredential:(id)arg1 withOptions:(id)arg2 andError:(id*)arg3;
- (unsigned int)createGSSName:(id)arg1 gname:(struct gss_name_t_desc_struct {}**)arg2 error:(id*)arg3;
- (void)destroyAllCredentials;
- (void)destroyCredential:(id)arg1;
- (void)destroyCredentialForUPN:(id)arg1;
- (bool)getPACForCred:(struct gss_cred_id_t_desc_struct { }*)arg1 pac:(id*)arg2;
- (id)listCredentials;
- (bool)validatePassword:(id)arg1 forUser:(id)arg2;

@end
