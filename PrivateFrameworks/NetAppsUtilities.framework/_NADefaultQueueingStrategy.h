
@interface _NADefaultQueueingStrategy : NSObject <NAQueueingStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)enqueueObject:(id)arg1 buffer:(id)arg2;

@end
