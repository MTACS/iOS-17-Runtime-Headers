
@interface NWConcrete_nw_authentication_credential : NSObject <OS_nw_authentication_credential> {
    NSObject<OS_sec_identity> * identity;
    char * password;
    int  persistence;
    int  type;
    char * username;
    NSObject<OS_xpc_object> * valid_authentication_types;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
