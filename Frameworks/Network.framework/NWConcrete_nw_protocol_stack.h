
@interface NWConcrete_nw_protocol_stack : NSObject <OS_nw_protocol_stack> {
    NSObject<OS_nw_array> * application_protocols;
    NSObject<OS_nw_protocol_options> * internet_protocol;
    NSObject<OS_nw_protocol_options> * link_protocol;
    NSObject<OS_nw_protocol_options> * original_proxied_transport_protocol;
    NSObject<OS_nw_array> * persistent_application_protocols;
    NSObject<OS_nw_protocol_options> * secondary_transport_protocol;
    NSObject<OS_nw_protocol_options> * transport_protocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
