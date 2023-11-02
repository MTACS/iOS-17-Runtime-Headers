
@interface NWConcrete_nw_connection_group_send_request : NSObject <OS_nw_connection_group_send_request> {
    id /* block */  completion;
    NSObject<OS_nw_content_context> * context;
    NSObject<OS_dispatch_data> * data;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_connection_group> * group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
