
@interface BSXPCServiceConnectionProxy : NSObject {
    unsigned int  _activationGeneration;
    id /* block */  _assertionProvider;
    NSArray * _attributes;
    BSXPCServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSAssertion * _lock_assertion;
    <BSXPCServiceConnectionHandshake> * _lock_handshake;
    unsigned int  _lock_messagesCount;
    BSObjCProtocol * _remoteProtocol;
    <BSServiceDispatchingQueue> * _replyQueue;
    RBSTarget * _target;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSObject<OS_xpc_object> * _underlyingConnection;
}

- (void)dealloc;

@end
