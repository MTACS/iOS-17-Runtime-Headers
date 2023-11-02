
@interface UIKeyboardTaskSubqueue : NSObject {
    UIKeyboardTaskExecutionContext * _context;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

+ (id)subqueueWithExecutionContext:(id)arg1;

- (void).cxx_destruct;
- (void)dispatchAsync:(id /* block */)arg1;
- (id)initWithExecutionContext:(id)arg1;
- (void)returnExecutionToParentQueue;

@end
