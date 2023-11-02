
@protocol HMMCounterObserver <NSObject>

@required

- (void)updatedCounter:(NSString *)arg1 fromOldValue:(long long)arg2 toNewValue:(long long)arg3;

@end
