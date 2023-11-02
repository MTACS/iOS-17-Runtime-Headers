
@interface NWConcrete_nw_interface_status_monitor : NSObject <OS_nw_interface_status_monitor> {
    unsigned int  __pad_bits;
    unsigned int  cancelled;
    NSObject<OS_nw_channel> * channel;
    void * channel_event_source;
    NSObject<OS_nw_interface> * interface;
    void * interface_advisory_source;
    id /* block */  packet_handler;
    NSObject<OS_dispatch_queue> * packet_handler_queue;
    id /* block */  update_handler;
    NSObject<OS_dispatch_queue> * update_handler_queue;
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
