
@interface VSSingleThreadDispatchQueue : NSObject {
    NSMutableArray * _blocks;
    NSString * _name;
    struct __CFRunLoopSource { } * _runLoopSource;
    id /* block */  _startCompletionBlock;
    long long  _state;
    struct __CFRunLoop { } * _underlyingRunLoop;
    NSThread * _underlyingThread;
}

@property (nonatomic, retain) NSMutableArray *blocks;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct __CFRunLoopSource { }*runLoopSource;
@property (nonatomic, copy) id /* block */ startCompletionBlock;
@property (nonatomic) long long state;
@property (nonatomic) struct __CFRunLoop { }*underlyingRunLoop;
@property (nonatomic, retain) NSThread *underlyingThread;

+ (id)currentQueue;

- (void).cxx_destruct;
- (void)_threadMain;
- (id)blocks;
- (void)dispatchBlock:(id /* block */)arg1;
- (void)dispatchBlockSync:(id /* block */)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (void)setBlocks:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setStartCompletionBlock:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (void)setUnderlyingRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)setUnderlyingThread:(id)arg1;
- (id /* block */)startCompletionBlock;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (long long)state;
- (void)stop;
- (struct __CFRunLoop { }*)underlyingRunLoop;
- (id)underlyingThread;

@end
