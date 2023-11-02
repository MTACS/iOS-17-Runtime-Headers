
@interface NWConcrete_nw_h3_0rtt_storage_canvas : NSObject <OS_nw_h3_0rtt_storage_canvas> {
    bool  dirty;
    NSObject<OS_dispatch_data> * quic_state;
    NSObject<OS_dispatch_data> * settings_data;
    NSObject<OS_dispatch_data> * tls_state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
