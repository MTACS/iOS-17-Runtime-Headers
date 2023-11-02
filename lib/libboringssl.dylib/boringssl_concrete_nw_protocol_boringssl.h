
@interface boringssl_concrete_nw_protocol_boringssl : NSObject <OS_nw_protocol_boringssl> {
    const char * address_string;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * application_output_handler;
    NSObject<OS_nw_association> * association;
    void * boringssl_bio;
    unsigned int  claimed_input_bytes;
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned int  connected;
    void * context;
    NSObject<OS_nw_frame> * current_input_frame;
    unsigned int  deferred_input_finished;
    unsigned int  did_receive_data_once;
    unsigned int  early_data_enabled;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * early_output_handler;
    unsigned int  external_frames;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  finalized_output_frame_array;
    int (* handshake_func;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * handshake_output_handler;
    void * handshake_timer;
    unsigned int  in_write_frames;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * initial_output_handler;
    unsigned int  input_available_unacknowledged;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  input_frame_array;
    unsigned int  input_frame_byte_count;
    unsigned int  input_suspended;
    unsigned int  log_identities_redacted;
    BOOL  log_str;
    unsigned int  logging_disabled;
    unsigned int  message_mode;
    id /* block */  message_writer;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  output_application_frame_array;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  output_early_frame_array;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  output_frame_array;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  output_handshake_frame_array;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  output_initial_frame_array;
    unsigned int  output_protocol_supports_early_data;
    NSObject<OS_nw_parameters> * parameters;
    const void * pending_output_buffer;
    unsigned int  pending_output_buffer_length;
    NSObject<OS_dispatch_data> * pending_output_data;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  protocol;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  read_frame_array;
    int (* read_func;
    unsigned int  read_ready;
    unsigned int  received_connect;
    unsigned int  ref_cnt;
    unsigned int  sent_error;
    unsigned int  server;
    unsigned int  servicing_handshake;
    unsigned int  servicing_reads;
    int  stack_error;
    unsigned int  started_negotiation;
    unsigned int  trust_invalid_certs;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  unassigned_input_frame_array;
    unsigned int  waiting_for_writable;
    unsigned int  wake_flag;
    int (* write_func;
    unsigned int  write_ready;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
