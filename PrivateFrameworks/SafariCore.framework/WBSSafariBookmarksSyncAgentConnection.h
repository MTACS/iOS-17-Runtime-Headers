
@interface WBSSafariBookmarksSyncAgentConnection : NSObject {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
}

@property (nonatomic, readonly) <WBSSafariBookmarksSyncAgentProtocol> *remoteObjectProxy;

- (void).cxx_destruct;
- (void)_connectionDidInvalidate;
- (void)_setUpConnectionIfNeeded;
- (id)init;
- (id)remoteObjectProxy;

@end
