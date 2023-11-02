
@interface _EFBoundedQueueStrategy : NSObject <EFQueueingStrategy> {
    unsigned long long  _capacity;
    id /* block */  _overflowHandler;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ overflowHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (id)descriptionType;
- (void)enqueueObject:(id)arg1 replaceIfExists:(bool)arg2 buffer:(id)arg3;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
- (id /* block */)overflowHandler;

@end
