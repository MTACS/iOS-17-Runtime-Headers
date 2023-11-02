
@interface _BRKSignificantTimeChangeNotifier : NSObject

+ (id)sharedInstance;

- (void)_notify:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)triggerNotification;

@end
