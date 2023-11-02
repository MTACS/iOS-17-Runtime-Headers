
@interface ARRunLoop : NSObject {
    struct __CFArray { } * _autoreleasePoolStack;
    bool  _cancelled;
    NSMutableArray * _earlyRunloopBlocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    struct __CFRunLoopObserver { } * _runLoopEnterObserver;
    struct __CFRunLoopObserver { } * _runLoopExitObserver;
    struct __CFRunLoop { } * _runloop;
    bool  _started;
}

@property bool cancelled;

- (void).cxx_destruct;
- (void)_runloop_handleActivity:(unsigned long long)arg1;
- (void)_runloop_popAutoreleasePool;
- (void)_runloop_pushAutoreleasePool;
- (void)_startThread;
- (void)cancel;
- (bool)cancelled;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)runOnRunLoop:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)start;

@end
