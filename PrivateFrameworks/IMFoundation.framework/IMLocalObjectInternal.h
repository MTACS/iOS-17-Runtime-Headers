
@interface IMLocalObjectInternal : NSObject {
    NSArray * _allowlistedClasses;
    bool  _busyForwarding;
    NSMutableArray * _componentQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _componentQueueLock;
    NSObject<OS_xpc_object> * _connection;
    IMMessageContext * _currentMessageContext;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    bool  _offMainThread;
    bool  _pendingComponentQueueProcessing;
    NSString * _portName;
    NSString * _processName;
    NSProtocolChecker * _protocolChecker;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runloopSource;
    id  _target;
    bool  _wasInterrupted;
}

- (void)dealloc;

@end
