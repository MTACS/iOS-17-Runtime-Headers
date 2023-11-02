
@interface NWConcrete_nw_ethernet_channel : NSObject <OS_nw_ethernet_channel> {
    struct channel_attr { } * _attributes;
    bool  _cancelled;
    struct channel { } * _channel;
    int  _channel_fd;
    NSObject<OS_dispatch_queue> * _client_queue;
    id /* block */  _client_receive_handler;
    id /* block */  _client_state_handler;
    NSObject<OS_nw_context> * _context;
    bool  _delay_cancel;
    unsigned short  _ether_type;
    NSObject<OS_nw_path_evaluator> * _evaluator;
    NSObject<OS_nw_path_flow> * _flow;
    unsigned char  _flowId;
    unsigned char  _flow_local_ethernet_address;
    void * _input_source;
    bool  _input_suspended;
    NSObject<OS_nw_interface> * _interface;
    const char * _interfaceName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned char  _nexusInstance;
    unsigned int  _nexusPort;
    NSObject<OS_nw_path_flow_registration> * _registration;
    struct channel_ring_desc { } * _rx_ring;
    unsigned short  _slot_size;
    int  _state;
    struct channel_ring_desc { } * _tx_ring;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
