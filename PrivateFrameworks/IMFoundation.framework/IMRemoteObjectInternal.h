
@interface IMRemoteObjectInternal : NSObject {
    NSObject<OS_xpc_object> * _connection;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    int  _pid;
    NSString * _portName;
    bool  _postedDeathNote;
    NSString * _processName;
    Protocol * _protocol;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _willBeTerminated;
}

@end
