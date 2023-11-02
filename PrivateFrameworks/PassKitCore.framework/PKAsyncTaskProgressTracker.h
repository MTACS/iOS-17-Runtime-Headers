
@interface PKAsyncTaskProgressTracker : NSObject {
    NSMutableSet * _completionHandlers;
    unsigned long long  _status;
}

@property (nonatomic, readonly) unsigned long long status;

- (void).cxx_destruct;
- (void)_executeCompletionHandlers;
- (id)init;
- (void)notifyOnCompletion:(id /* block */)arg1;
- (unsigned long long)status;
- (void)taskDidComplete;
- (void)taskDidStart;

@end
