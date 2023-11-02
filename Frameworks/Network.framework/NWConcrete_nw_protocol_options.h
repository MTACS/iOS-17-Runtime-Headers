
@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options> {
    NWConcrete_nw_protocol_definition * definition;
    void * handle;
    NSObject<OS_xpc_object> * legacy_parameters;
    unsigned short  log_id_num;
    BOOL  log_id_str;
    bool  override_stack_endpoint;
    bool  prohibit_joining;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * protocol_handle;
    NSObject<OS_nw_endpoint> * proxy_endpoint;
    NSObject<OS_nw_array> * proxy_next_hops;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
