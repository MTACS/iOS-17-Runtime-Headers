
@interface NEFilterPacketInterpose : NSObject {
    struct channel_attr { } * _attributes;
    struct channel { } * _channel;
    int  _channel_fd;
    NEFilterPacketContext * _context;
    struct interpose_frame { unsigned char x1; char *x2; unsigned int x3; unsigned long long x4; struct __user_buflet {} *x5; } * _current_frame;
    bool  _delay_cancel;
    NSUUID * _flowId;
    struct interpose_frame { 
        unsigned char ring_id; 
        char *buffer; 
        unsigned int bufferLength; 
        unsigned long long packet; 
        struct __user_buflet {} *buflet; 
    }  _frame_buffer;
    void * _input_source;
    bool  _input_suspended;
    NSObject<OS_nw_interface> * _interface;
    void * _key;
    unsigned int  _keyLength;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _nexusInstance;
    unsigned int  _nexusPort;
    NEFilterPacketProvider * _provider;
    struct __slot_desc { } * _rx_last_slot;
    struct channel_ring_desc { } * _rx_ring_egress;
    struct channel_ring_desc { } * _rx_ring_ingress;
    unsigned short  _slot_size;
    struct channel_ring_desc { } * _tx_ring_egress;
    struct channel_ring_desc { } * _tx_ring_ingress;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
