
@interface NWConcrete_nw_content_context : NSObject <OS_nw_content_context> {
    NWConcrete_nw_content_context * antecedent;
    unsigned char  app_metadata;
    unsigned char  app_type;
    unsigned int  completed_send;
    unsigned int  connection_group_connection;
    NSObject<OS_nw_array> * connection_group_info;
    unsigned int  connection_group_multicast;
    unsigned long long  enqueue_time;
    NSObject<OS_nw_error> * error;
    unsigned int  expiration_checked;
    unsigned long long  expiration_milliseconds;
    unsigned int  has_app_metadata;
    unsigned int  has_packet_id;
    BOOL  identifier;
    unsigned int  is_final;
    unsigned int  is_wake_packet;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned char  packet_id;
    NSObject<OS_nw_array> * protocol_metadatas;
    double  relative_priority;
    unsigned int  supports_replies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
