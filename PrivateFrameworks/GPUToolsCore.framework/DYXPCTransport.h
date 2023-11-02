
@interface DYXPCTransport : DYTransport {
    NSString * _amdIdentifier;
    bool  _connected;
    NSObject<OS_xpc_object> * _connection;
    DYFuture * _future;
}

@property (nonatomic, readonly) bool isNewTransport;

- (void).cxx_destruct;
- (void)_invalidate;
- (bool)_packMessage:(id)arg1 error:(id*)arg2;
- (long long)_sendMessage:(id)arg1 error:(id*)arg2;
- (id)connect;
- (bool)connected;
- (id)initWithAMDIdentifier:(id)arg1;
- (bool)isNewTransport;
- (void)process_message_from_compat_daemon:(id)arg1;

@end
