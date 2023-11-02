
@interface RBPLEventQueue : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _eventQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _scheduled;
}

- (void).cxx_destruct;
- (id)dequeueEvent;
- (void)enqueueEvent:(id)arg1;
- (id)init;
- (void)scheduleWork;

@end
