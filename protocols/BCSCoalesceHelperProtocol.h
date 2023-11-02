
@protocol BCSCoalesceHelperProtocol <NSObject>

@required

- (NSArray *)dequeueCoalesceObjectsForCoalesceKey:(NSString *)arg1;
- (void)enqueueCoalesceObject:(id <BCSCoalesceObjectProtocol>)arg1 isDuplicateRequest:(bool*)arg2;

@end
