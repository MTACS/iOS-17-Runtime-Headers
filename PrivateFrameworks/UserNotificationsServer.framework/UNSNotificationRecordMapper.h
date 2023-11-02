
@interface UNSNotificationRecordMapper : NSObject {
    BSCFBundle * _bundle;
    UNSNotificationCategoryRepository * _categoryRepository;
}

- (void).cxx_destruct;
- (id)_notificationCommunicationContextForNotificationRecord:(id)arg1;
- (id)_notificationContentForNotificationRecord:(id)arg1;
- (id)_notificationIconForNotificationRecord:(id)arg1;
- (unsigned long long)_notificationInterruptionLevelForNotificationRecord:(id)arg1;
- (id)_notificationSoundForNotificationRecord:(id)arg1;
- (id)_notificationTriggerForNotificationRecord:(id)arg1;
- (id)initWithBundle:(id)arg1 categoryRepository:(id)arg2;
- (id)notificationForNotificationRecord:(id)arg1;
- (id)notificationRequestForNotificationRecord:(id)arg1;

@end
