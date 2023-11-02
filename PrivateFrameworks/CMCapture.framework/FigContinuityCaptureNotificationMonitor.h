
@interface FigContinuityCaptureNotificationMonitor : NSObject

+ (void)initialize;
+ (id)sharedInstance;

- (void)_handleContinuityCaptureNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
