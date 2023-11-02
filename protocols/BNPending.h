
@protocol BNPending <NSObject>

@required

- (NSSet *)activeSuspensionReasons;
- (void)enqueuePresentable:(id <BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;
- (bool)isSuspended;
- (BNPendingDequeuePromise *)peekPresentable;
- (NSString *)penderIdentifier;
- (NSArray *)pullPresentablesWithIdentification:(id <BNPresentableUniquelyIdentifying>)arg1;
- (void)setPenderIdentifier:(NSString *)arg1;
- (bool)setSuspended:(bool)arg1 forReason:(NSString *)arg2;

@end
