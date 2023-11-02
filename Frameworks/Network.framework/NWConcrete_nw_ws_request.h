
@interface NWConcrete_nw_ws_request : NSObject <OS_nw_ws_request> {
    NSObject<OS_xpc_object> * header_names;
    NSObject<OS_xpc_object> * header_values;
    NSObject<OS_xpc_object> * subprotocols;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
