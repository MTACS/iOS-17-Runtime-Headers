
@protocol BKOperationDelegate <NSObject>

@optional

- (void)operation:(BKOperation *)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(BKOperation *)arg1 presenceStateChanged:(bool)arg2;
- (void)operation:(BKOperation *)arg1 stateChanged:(long long)arg2;

@end
