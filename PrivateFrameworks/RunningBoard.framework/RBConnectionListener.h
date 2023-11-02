
@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing> {
    <RBDaemonContextProviding> * _context;
    NSObject<OS_xpc_object> * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_connectionToClientMap;
    NSMapTable * _lock_identifierToClientMap;
    NSMutableArray * _lock_readyClients;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_os_transaction> * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)captureState;
- (id)debugDescription;
- (id)init;
- (id)stateCaptureTitle;

@end
