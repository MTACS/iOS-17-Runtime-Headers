
@protocol CUIKEditingContextObserver <NSObject>

@required

- (bool)isTestObserver;
- (NSDictionary *)oldObject:(EKObject *)arg1 didUpdateTo:(EKObject *)arg2;

@optional

- (void)saveCancelled;

@end
