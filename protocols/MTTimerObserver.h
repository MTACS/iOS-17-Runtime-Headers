
@protocol MTTimerObserver <NSObject>

@required

- (void)nextTimerDidChange:(MTTimer *)arg1;
- (void)source:(id <MTSource>)arg1 didAddTimers:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didDismissTimer:(MTTimer *)arg2;
- (void)source:(id <MTSource>)arg1 didFireTimer:(MTTimer *)arg2;
- (void)source:(id <MTSource>)arg1 didRemoveTimers:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didUpdateTimers:(NSArray *)arg2;

@optional

- (void)source:(id <MTSource>)arg1 didUpdateTimers:(NSArray *)arg2 fromTimers:(NSArray *)arg3;

@end
