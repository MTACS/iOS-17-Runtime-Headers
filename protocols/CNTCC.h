
@protocol CNTCC

@required

- (long long)checkAuthorizationStatusOfAuditToken:(CNAuditToken *)arg1 assumedIdentity:(NSObject<OS_tcc_identity> *)arg2;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(NSObject<OS_tcc_identity> *)arg1;
- (bool)isAuthorizationRestricted;
- (void)requestAuthorization:(void *)arg1 auditToken:(void *)arg2 assumedIdentity:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: long long, CNAuditToken *, NSObject<OS_tcc_identity> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
