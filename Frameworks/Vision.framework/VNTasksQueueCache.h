
@interface VNTasksQueueCache : NSObject {
    long long  _maximumTasksCount;
    NSMutableDictionary * _queueNameToTasksQueueDictionary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueNameToTasksQueueDictionaryLock;
}

@property long long maximumTasksCount;

+ (id)queueLabelWithUniqueAppendix:(id)arg1;

- (void).cxx_destruct;
- (id)_queueWithUniqueAppendix:(id)arg1 queueClass:(Class)arg2;
- (id)init;
- (long long)maximumTasksCount;
- (id)queueWithUniqueAppendix:(id)arg1;
- (void)releaseAllQueues;
- (void)releaseQueueWithUniqueAppendix:(id)arg1;
- (void)setMaximumTasksCount:(long long)arg1;

@end
