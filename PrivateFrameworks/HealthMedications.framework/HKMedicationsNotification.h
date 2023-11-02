
@interface HKMedicationsNotification : NSObject {
    NSString * _argument;
    NSString * _category;
    NSString * _scheduleItemIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *argument;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *scheduleItemIdentifier;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)allNotificationCategories;
+ (id)notificationBeforeFirstUnlockWithScheduleItemIdentifier:(id)arg1;
+ (id)notificationCategoryForString:(id)arg1;
+ (id)notificationMissedWithScheduleItemIdentifier:(id)arg1;
+ (id)notificationNotMissedWithScheduleItemIdentifier:(id)arg1;
+ (id)notificationNotMissedWithScheduleItemIdentifier:(id)arg1 isCritical:(bool)arg2 isFollowUp:(bool)arg3;

- (void).cxx_destruct;
- (id)argument;
- (id)category;
- (id)init;
- (id)scheduleItemIdentifier;
- (id)userInfo;

@end
