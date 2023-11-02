
@interface nw_listener_inbox_protocol : nw_listener_inbox {
    struct nw_listen_protocol_callbacks { 
        int (*new_flow)(); 
        int (*disconnected)(); 
    }  _listen_callbacks;
    struct nw_listen_protocol { 
        struct nw_listen_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *protocol_handler; 
        void *protocol_handler_context; 
        void *handle; 
    }  _listen_protocol;
}

- (bool)cancel;
- (id)description;

@end
