
@interface NWConcrete_nw_flow_final_read : NSObject <OS_nw_flow_final_read> {
    NSObject<OS_dispatch_data> * content;
    NSObject<OS_nw_content_context> * content_context;
    NSObject<OS_nw_error> * error;
    bool  is_complete;
    bool  receive_single_message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
