
@interface _BSNSXPCInvalidCallbackTracking : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_handler;
}

- (void).cxx_destruct;

@end
