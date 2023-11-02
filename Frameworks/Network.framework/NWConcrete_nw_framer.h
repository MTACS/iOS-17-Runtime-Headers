
@interface NWConcrete_nw_framer : NSObject <OS_nw_framer> {
    unsigned int  block_lower_metadata;
    struct nw_protocol_callbacks { 
        int (*add_input_handler)(); 
        int (*remove_input_handler)(); 
        int (*replace_input_handler)(); 
        int (*connect)(); 
        int (*disconnect)(); 
        int (*connected)(); 
        int (*disconnected)(); 
        int (*error)(); 
        int (*input_available)(); 
        int (*output_available)(); 
        int (*get_input_frames)(); 
        int (*get_output_frames)(); 
        int (*finalize_output_frames)(); 
        int (*link_state)(); 
        int (*get_parameters)(); 
        int (*get_path)(); 
        int (*get_local_endpoint)(); 
        int (*get_remote_endpoint)(); 
        int (*register_notification)(); 
        int (*unregister_notification)(); 
        int (*notify)(); 
        int (*updated_path)(); 
        int (*supports_external_data)(); 
        int (*input_finished)(); 
        int (*output_finished)(); 
        int (*get_output_local_endpoint)(); 
        int (*get_output_interface)(); 
        int (*waiting_for_output)(); 
        int (*copy_info)(); 
        int (*add_listen_handler)(); 
        int (*remove_listen_handler)(); 
        int (*get_message_properties)(); 
        int (*reset)(); 
        int (*input_flush)(); 
    }  callbacks;
    unsigned int  called_start;
    id /* block */  cleanup;
    NSObject<OS_nw_dictionary> * connection_state;
    NSObject<OS_nw_context> * context;
    id /* block */  copy_metadata;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  failed;
    unsigned int  flow_controlled;
    unsigned long long  handshake_milliseconds;
    unsigned long long  handshake_rtt_milliseconds;
    unsigned int  in_input_available;
    unsigned int  in_input_callout;
    unsigned int  in_output_callout;
    unsigned int  in_start;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  inbound_frames;
    unsigned int  input_available_unacknowledged;
    unsigned long long  input_body_remaining;
    unsigned long long  input_needed;
    unsigned int  input_suspended;
    BOOL  log_str;
    unsigned int  new_input_available;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  outbound_frames;
    unsigned int  output_blocked;
    NSObject<OS_nw_array> * output_data_array;
    unsigned int  output_frame_as_message;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_protocol_definition> * parent_definition;
    id /* block */  parse_input;
    unsigned int  pass_through_input;
    unsigned int  pass_through_output;
    NSObject<OS_nw_protocol_metadata> * pending_inbound_message;
    unsigned int  pending_input_frame_count;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  pending_input_frames;
    unsigned int  pending_input_should_mark_complete;
    unsigned int  pending_output_connection_complete;
    unsigned int  pending_output_cursor;
    unsigned int  pending_output_finished;
    unsigned int  pending_output_frames;
    NSObject<OS_nw_protocol_metadata> * pending_output_message;
    unsigned int  pending_output_message_complete;
    unsigned int  pending_output_message_length;
    unsigned short  prepended_log_id_num;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  protocol;
    unsigned int  ready;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  received_input_frames;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  received_output_frames;
    id /* block */  start;
    id /* block */  stop;
    unsigned int  supports_external_data;
    unsigned int  wait_for_early_data;
    unsigned int  waiting_for_flow_control;
    id /* block */  wakeup;
    id /* block */  wakeup_block;
    id /* block */  write_output;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
