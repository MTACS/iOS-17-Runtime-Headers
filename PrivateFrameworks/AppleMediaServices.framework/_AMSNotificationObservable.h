
@interface _AMSNotificationObservable : AMSObservable

- (void)_receivedNotification:(id)arg1;
- (bool)cancel;
- (id)initWithNotification:(id)arg1 object:(id)arg2;
- (bool)sendCompletion;

@end
