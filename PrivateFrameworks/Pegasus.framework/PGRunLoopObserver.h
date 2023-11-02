
@interface PGRunLoopObserver : NSObject {
    id /* block */  _actions;
    struct __CFRunLoopObserver { } * _runLoopObserver;
}

@property (nonatomic, copy) id /* block */ actions;
@property (nonatomic) struct __CFRunLoopObserver { }*runLoopObserver;

- (void).cxx_destruct;
- (id /* block */)actions;
- (void)dealloc;
- (struct __CFRunLoopObserver { }*)runLoopObserver;
- (void)setActions:(id /* block */)arg1;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;

@end
