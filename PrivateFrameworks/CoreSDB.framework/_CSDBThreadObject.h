
@interface _CSDBThreadObject : NSObject {
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _queueContext;
    NSRunLoop * _runLoop;
    struct __CFRunLoopSource { } * _runLoopSource;
    NSThread * _thread;
}

- (void)_threadedMain;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2;
- (bool)isCurrentThreadOtherwiseAssert:(bool)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (id)thread;

@end
