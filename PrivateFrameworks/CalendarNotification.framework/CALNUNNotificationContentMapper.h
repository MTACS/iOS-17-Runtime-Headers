
@interface CALNUNNotificationContentMapper : NSObject {
    CALNUNNotificationIconMapper * _notificationIconMapper;
}

@property (nonatomic, readonly) CALNUNNotificationIconMapper *notificationIconMapper;

+ (id)_calnNotificationSoundFromUNNotificationContent:(id)arg1;
+ (id)_sectionIdentifierFromTopicIdentifiers:(id)arg1;
+ (void)_setBodyForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setInterruptionLevelForCALNMutableNotificationContent:(id)arg1 usingUNNotificationContent:(id)arg2;
+ (void)_setInterruptionLevelForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setPeopleIdentifiersForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setSoundForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setSubtitleForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setSummaryArgumentForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setThreadIdentifierForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setTitleForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setTopicIdentifiersForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;
+ (void)_setUserInfoForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2;

- (void).cxx_destruct;
- (id)_iconIdentifierFromUNNotificationContent:(id)arg1;
- (id)_unNotificationIconFromCALNNotificationContent:(id)arg1;
- (id)calnNotificationContentFromUNNotificationContent:(id)arg1;
- (id)initWithNotificationIconMapper:(id)arg1;
- (id)notificationIconMapper;
- (id)unNotificationContentFromCALNNotificationContent:(id)arg1;

@end
