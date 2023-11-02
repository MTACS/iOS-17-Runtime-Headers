
@interface _EFBufferedQueueStrategy : NSObject <EFQueueingStrategy> {
    id /* block */  _batchHandler;
    unsigned long long  _capacity;
}

@property (nonatomic, readonly) id /* block */ batchHandler;
@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)batchHandler;
- (unsigned long long)capacity;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (id)descriptionType;
- (void)enqueueObject:(id)arg1 replaceIfExists:(bool)arg2 buffer:(id)arg3;
- (id)initWithCapacity:(unsigned long long)arg1 batchHandler:(id /* block */)arg2;

@end
