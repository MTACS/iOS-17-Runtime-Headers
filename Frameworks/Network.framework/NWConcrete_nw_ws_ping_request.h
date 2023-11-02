
@interface NWConcrete_nw_ws_ping_request : NSObject <OS_nw_ws_ping_request> {
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_dispatch_data> * contents;
    id /* block */  pong_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
