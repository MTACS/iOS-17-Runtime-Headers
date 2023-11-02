
@interface nw_listener_inbox_socket : nw_listener_inbox {
    unsigned char  _ipProtocol;
    unsigned char  _listenUUID;
    int  _sockfd_for_logging_only_do_not_close_or_use;
    int  _sockfd_from_client;
    NSObject<OS_nw_fd_wrapper> * _sockfd_wrapper_for_connection_group_only;
    void * _source;
}

- (void).cxx_destruct;
- (bool)cancel;
- (id)description;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (bool)resume;
- (id)start;
- (bool)suspend;

@end
