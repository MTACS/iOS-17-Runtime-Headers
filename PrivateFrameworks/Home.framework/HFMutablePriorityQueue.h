
@interface HFMutablePriorityQueue : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NAQueue * _queue;
}

@property (readonly) unsigned long long count;
@property (retain) NAQueue *queue;

- (void).cxx_destruct;
- (void)_operateOnMatchingObjects:(id)arg1 removingMatched:(bool)arg2 lockedOperationBlock:(id /* block */)arg3;
- (void)_prioritizeObjects:(id)arg1 priorityBlock:(id /* block */)arg2;
- (unsigned long long)count;
- (id)dequeue;
- (id)drain;
- (id)enqueue:(id)arg1;
- (id)init;
- (void)prioritizeObjects:(id)arg1;
- (void)prioritizeObjects:(id)arg1 increment:(long long)arg2;
- (id)queue;
- (void)removeAllObjectsMatchingObjects:(id)arg1;
- (void)removeFirstOfObjects:(id)arg1;
- (void)removeObjectsWithEntries:(id)arg1;
- (void)resetPriorityForObjects:(id)arg1;
- (void)setQueue:(id)arg1;

@end
