
@interface FCURLRequestScheduler : NSObject {
    NSURLSession * _URLSession;
    NSDate * _dateOfLastProgress;
    NSMapTable * _inFlightURLTasks;
    NFUnfairLock * _lock;
    unsigned long long  _maxInFlightLowPriorityURLTasks;
    unsigned long long  _maxInFlightURLTasks;
    NSMutableOrderedSet * _requests;
}

- (void).cxx_destruct;
- (id)initWithURLSession:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)scheduleURLRequest:(id)arg1 destination:(long long)arg2 priority:(long long)arg3 loggingKey:(id)arg4 completion:(id /* block */)arg5;

@end
