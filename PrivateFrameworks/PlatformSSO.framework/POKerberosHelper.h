
@interface POKerberosHelper : NSObject

- (struct gss_cred_id_t_desc_struct { }*)acquireCredentialForUUID:(id)arg1;
- (bool)checkForValidKerberosTGT:(id)arg1;
- (bool)destroyCredentialForUUID:(id)arg1;
- (void)exchangeKerberosTGTForEntry:(id)arg1;
- (id)importKerberosEntry:(id)arg1 error:(id*)arg2;

@end
