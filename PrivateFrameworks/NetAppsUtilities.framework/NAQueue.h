
@interface NAQueue : NSObject {
    NSMutableArray * _buffer;
    <NAQueueingStrategy> * _strategy;
}

@property (readonly) NSArray *allObjects;
@property (readonly) unsigned long long count;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
+ (id)priorityQueueWithComparator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)drain;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;

@end
