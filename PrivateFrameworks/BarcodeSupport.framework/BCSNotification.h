
@interface BCSNotification : NSObject {
    BCSAction * _action;
    BCSNotificationIcon * _attachmentIcon;
    NSString * _identifier;
    NSMutableDictionary * _localActions;
    int  _requestingProcessID;
}

@property (nonatomic, readonly) bool canHandleActionLocally;
@property (nonatomic, readonly) long long codeType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UNNotificationRequest *request;
@property (nonatomic) int requestingProcessID;
@property (nonatomic, readonly) bool shouldSkipBanner;

+ (id)_tlAlertConfiguration;
+ (id)notificationForAction:(id)arg1;
+ (id)tempVCardFileURL;

- (void).cxx_destruct;
- (id)_actionDescriptionString;
- (id)_actionTypeStringForNFC;
- (id)_actionTypeStringForQRCode;
- (id)_attachmentIconURL;
- (id)_content;
- (id)_contentExtensionData;
- (bool)_contentIsPreviewable;
- (id)_defaultURL;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (void)_handleCalendarEventWithICSString:(id)arg1;
- (void)_handleContactInfo:(id)arg1;
- (id)_initWithAction:(id)arg1;
- (id)_notificationActionFromActionPickerItem:(id)arg1;
- (id)_orderAppLinkActionsByRecency:(id)arg1;
- (void)_performActionAfterUnlock:(id /* block */)arg1;
- (id)_pickerLabelForURLActionPickerItem:(id)arg1;
- (bool)_shouldHandleActionPickerItemLocally:(id)arg1;
- (bool)_shouldManuallyRequireAuthenticationForURL:(id)arg1;
- (bool)_shouldRequireUserToPickTargetApp;
- (bool)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1;
- (void)_showAppPickerAlertWithFBOptions:(id)arg1;
- (id)_supplementActions;
- (id)_title;
- (bool)canHandleActionLocally;
- (long long)codeType;
- (void)didHandleBulletinActionWithIdentifier:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2;
- (id)identifier;
- (id)request;
- (int)requestingProcessID;
- (void)setRequestingProcessID:(int)arg1;
- (bool)shouldHandleBulletinActionWithIdentifier:(id)arg1;
- (bool)shouldSkipBanner;

@end
