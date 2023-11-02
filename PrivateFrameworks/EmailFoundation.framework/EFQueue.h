
@interface EFQueue : NSObject {
    NSMutableArray * _buffer;
    <EFQueueingStrategy> * _strategy;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) <EFQueueingStrategy> *strategy;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
+ (id)bufferedQueueWithCapacity:(unsigned long long)arg1 batchHandler:(id /* block */)arg2;
+ (id)priorityQueueWithComparator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)allObjects;
- (id)buffer;
- (unsigned long long)count;
- (id)debugDescription;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)description;
- (id)drain;
- (void)enqueue:(id)arg1;
- (void)enqueue:(id)arg1 replaceIfExists:(bool)arg2;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;
- (id)strategy;

@end
