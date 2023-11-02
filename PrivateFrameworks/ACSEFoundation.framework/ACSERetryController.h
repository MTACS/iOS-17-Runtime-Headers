
@interface ACSERetryController : NSObject {
    id /* block */  _executionBlock;
    unsigned long long  _maxNumberOfRetries;
    unsigned long long  _numberOfAttempts;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long numberOfAttempts;

- (void).cxx_destruct;
- (bool)executeBlock;
- (id)initWithMaxNumberOfRetries:(unsigned long long)arg1 block:(id /* block */)arg2;
- (unsigned long long)numberOfAttempts;
- (bool)retryAfterSeconds:(unsigned long long)arg1;

@end
