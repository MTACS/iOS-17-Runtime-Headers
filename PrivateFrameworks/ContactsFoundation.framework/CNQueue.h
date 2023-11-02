
@interface CNQueue : NSObject {
    NSMutableArray * _buffer;
    <CNQueueingStrategy> * _strategy;
}

@property (readonly) NSArray *allObjects;
@property (nonatomic, readonly) NSMutableArray *buffer;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) <CNQueueingStrategy> *strategy;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
+ (id)priorityQueueWithComparator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)allObjects;
- (id)buffer;
- (unsigned long long)count;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)drain;
- (void)enqueue:(id)arg1;
- (void)enqueueObjectsFromArray:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;
- (id)strategy;

@end
