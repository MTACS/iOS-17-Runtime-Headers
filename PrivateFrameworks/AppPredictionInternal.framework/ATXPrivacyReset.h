
@interface ATXPrivacyReset : NSObject {
    id  _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePrivacyResetNotification;
- (bool)_placeholderExists;
- (id)_placeholderPath;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_removeAllAppActionData;
- (void)_removeAllBlendingUICaches;
- (void)_writeDeletionPlaceholder;
- (void)dealloc;
- (id)init;

@end
