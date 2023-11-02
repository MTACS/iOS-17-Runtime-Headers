
@protocol CAMTimerCacheDelegate <NSObject>

@required

- (void)timerCache:(CAMTimerCache *)arg1 timerDidFireForKey:(id <NSCopying>)arg2;

@end
