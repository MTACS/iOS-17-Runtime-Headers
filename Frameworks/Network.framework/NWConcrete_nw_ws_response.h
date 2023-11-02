
@interface NWConcrete_nw_ws_response : NSObject <OS_nw_ws_response> {
    NSObject<OS_xpc_object> * header_names;
    NSObject<OS_xpc_object> * header_values;
    char * selected_subprotocol;
    int  status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
