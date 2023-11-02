
@protocol EFQueueingStrategy <NSObject>

@required

- (void)dequeueObject:(id)arg1 buffer:(NSMutableArray *)arg2;
- (NSString *)descriptionType;
- (void)enqueueObject:(id)arg1 replaceIfExists:(bool)arg2 buffer:(NSMutableArray *)arg3;

@end
