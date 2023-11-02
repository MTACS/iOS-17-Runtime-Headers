
@interface PLRebuildUserNotification : NSObject {
    NSString * _message;
}

@property (readonly) NSString *message;

- (void).cxx_destruct;
- (bool)_shouldShowUserNotification;
- (void)_snoozeForHours:(unsigned long long)arg1;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (long long)showAlertAndWaitForResponse;

@end
