
@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge> {
    unsigned int  attempt_count;
    void * http_message;
    NWConcrete_nw_authentication_credential * proposed_credential;
    NWConcrete_nw_authentication_protection_space * protection_space;
    int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
