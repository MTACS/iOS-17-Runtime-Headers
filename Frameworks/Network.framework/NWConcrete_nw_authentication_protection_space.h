
@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space> {
    unsigned int  __pad_bits;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  is_proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
