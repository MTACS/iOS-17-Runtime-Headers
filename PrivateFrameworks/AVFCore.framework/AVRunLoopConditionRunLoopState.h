
@interface AVRunLoopConditionRunLoopState : NSObject {
    struct __CFRunLoop { } * _runLoop;
    struct __CFRunLoopSource { } * _signalSource;
    bool  _signaled;
}

@property (nonatomic, readonly) struct __CFRunLoop { }*runLoop;
@property (nonatomic) struct __CFRunLoopSource { }*signalSource;
@property (nonatomic) bool signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { }*)arg1;

- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;
- (struct __CFRunLoop { }*)runLoop;
- (void)setSignalSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setSignaled:(bool)arg1;
- (struct __CFRunLoopSource { }*)signalSource;
- (bool)signaled;

@end
