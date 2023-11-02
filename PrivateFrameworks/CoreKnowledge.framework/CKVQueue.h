
@interface CKVQueue : NSObject {
    CKVQueueNode * _firstNode;
    CKVQueueNode * _lastNode;
}

- (void).cxx_destruct;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end
