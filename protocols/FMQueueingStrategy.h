
@protocol FMQueueingStrategy <NSObject>

@required

- (void)enqueueObject:(id)arg1 buffer:(NSMutableArray *)arg2;

@end
