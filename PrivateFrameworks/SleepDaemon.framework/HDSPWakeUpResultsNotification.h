
@interface HDSPWakeUpResultsNotification : NSObject {
    unsigned long long  _category;
    long long  _endMorningIndex;
    HKQuantity * _goalAchieved;
    long long  _notificationVariant;
    NSString * _userFirstName;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly) long long endMorningIndex;
@property (nonatomic, readonly, copy) HKQuantity *goalAchieved;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long notificationVariant;
@property (nonatomic, readonly, copy) NSString *userFirstName;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)goalAchievedQuantityForCategory:(unsigned long long)arg1 userInfo:(id)arg2;
+ (id)goalAchievedUserInfoKeyForCategory:(unsigned long long)arg1;
+ (id)wakeUpResultsNotificationFromUserInfo:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)category;
- (id)categoryIdentifier;
- (long long)endMorningIndex;
- (id)goalAchieved;
- (long long)goalAchievedUserInfoValue;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCategory:(unsigned long long)arg1 endMorningIndex:(long long)arg2 goalAchieved:(id)arg3 notificationVariant:(long long)arg4 userFirstName:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNotification:(id)arg1;
- (bool)isOneNight;
- (long long)notificationVariant;
- (id)userFirstName;
- (id)userInfo;

@end
