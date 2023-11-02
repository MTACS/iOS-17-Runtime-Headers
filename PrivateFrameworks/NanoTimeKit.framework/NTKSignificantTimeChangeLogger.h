
@interface NTKSignificantTimeChangeLogger : NSObject

+ (void)beginLogging;
+ (id)sharedInstance;

- (void)_handleNotification:(id)arg1;
- (void)_logNotificationReceiptWithName:(id)arg1;
- (void)_startObserving;
- (id)init;

@end
