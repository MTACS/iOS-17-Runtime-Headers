
@interface NWConcrete_nw_authentication_credential_cache_entry : NSObject <OS_nw_authentication_credential_cache_entry> {
    NSObject<OS_nw_authentication_credential> * credential;
    struct _CFHTTPAuthentication { } * http_authentication;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
