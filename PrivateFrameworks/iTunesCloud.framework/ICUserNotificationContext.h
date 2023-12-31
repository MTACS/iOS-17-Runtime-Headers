
@interface ICUserNotificationContext : NSObject {
    id /* block */  _completionHandler;
    struct __CFRunLoopSource { } * _runLoopSourceRef;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) struct __CFRunLoopSource { }*runLoopSourceRef;

- (void).cxx_destruct;
- (void)clearRunLoop;
- (id /* block */)completionHandler;
- (struct __CFRunLoopSource { }*)runLoopSourceRef;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRunLoopSourceRef:(struct __CFRunLoopSource { }*)arg1;

@end
