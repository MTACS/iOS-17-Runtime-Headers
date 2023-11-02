
@interface QLMemoryLimitedQueue : NSObject {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    unsigned long long  _currentSize;
    int  _currentTaskCount;
    unsigned long long  _maxSize;
    int  _maxTaskCount;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _tasks;
}

@property (readonly) unsigned long long currentSize;
@property (readonly) int currentTaskCount;

- (void).cxx_destruct;
- (void)addTask:(id)arg1;
- (unsigned long long)currentSize;
- (int)currentTaskCount;
- (void)dequeueIfPossible;
- (void)executeTask:(id)arg1;
- (id)initWithMaximumMemoryConsumption:(unsigned long long)arg1 maximumConcurrentTasks:(int)arg2;

@end
