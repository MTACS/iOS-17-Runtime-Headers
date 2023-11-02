
@interface nw_ip_channel_inbox : nw_listener_inbox {
    unsigned int  _bound_local_address;
    NSObject<OS_nw_channel> * _channel;
    NSObject<OS_nw_path_flow> * _flow;
    unsigned char  _ip_proto;
    const union sockaddr_in_4_6 { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct __sockaddr_header { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2; struct sockaddr_in { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; struct in_addr { unsigned int x_4_2_1; } x_3_1_4; BOOL x_3_1_5[8]; } x3; struct sockaddr_in6 { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned short x_4_1_3; unsigned int x_4_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_4_1_5; unsigned int x_4_1_6; } x4; } * _local;
    unsigned short  _local_port;
    NSObject<OS_nw_path> * _path;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  _protocol;
    unsigned int  _scopeid;
}

- (void).cxx_destruct;
- (bool)cancel;
- (id)description;

@end
