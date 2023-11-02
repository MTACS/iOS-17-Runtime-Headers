
@protocol CNChangeNotifierWrapper <NSObject>

@required

- (void)addObserver:(id <CNChangeNotificationReceiver>)arg1 notification:(NSString *)arg2;
- (void)postNotification:(NSString *)arg1;
- (void)removeObserver:(id <CNChangeNotificationReceiver>)arg1 notification:(NSString *)arg2;

@end
