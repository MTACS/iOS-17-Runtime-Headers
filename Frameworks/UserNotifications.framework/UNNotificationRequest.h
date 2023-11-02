
@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding, UNNotificationSecurityScopeProviding> {
    UNNotificationContent * _content;
    unsigned long long  _destinations;
    NSString * _identifier;
    UNNotificationTrigger * _trigger;
}

@property (nonatomic, readonly, copy) UNNotificationContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) UNNotificationTrigger *trigger;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
- (unsigned long long)_notificationDestinationsForInterruptionLevel:(unsigned long long)arg1 inputDestinations:(unsigned long long)arg2;
- (void)addSecurityScope:(id)arg1;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)destinations;
- (void)encodeWithCoder:(id)arg1;
- (void)enterSecurityScope;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)leaveSecurityScope;
- (void)removeSecurityScope;
- (void)setDestinations:(unsigned long long)arg1;
- (id)trigger;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (id)hkmd_requestForNotification:(id)arg1;
+ (id)hkmd_requestForTimeZoneNotification;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)_hkmc_notificationRequestWithCategory:(id)arg1 body:(id)arg2 title:(id)arg3 expirationDate:(id)arg4 fertileWindowEndDayIndex:(long long)arg5 daysShiftedFromCalendarMethod:(id)arg6;
+ (id)_hkmc_notificationRequestWithContent:(id)arg1;
+ (id)_hkmc_requestForCategoryIdentifier:(id)arg1 startDate:(id)arg2 fertileWindowEndDayIndex:(long long)arg3 daysShiftedFromCalendarMethod:(id)arg4;
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1;
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1 fertileWindowEndDayIndex:(long long)arg2;
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1 fertileWindowEndDayIndex:(long long)arg2 daysShiftedFromCalendarMethod:(id)arg3;

// Image: /System/Library/PrivateFrameworks/HealthMobility.framework/HealthMobility

+ (id)_hkmobility_notificationRequestWithCategory:(id)arg1 expirationDate:(id)arg2;
+ (id)_hkmobility_requestForCategory:(id)arg1 startDate:(id)arg2;
+ (id)hkmobility_requestForCategory:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MentalHealth.framework/MentalHealth

+ (id)_contentForCategoryIdentifier:(id)arg1;
+ (id)hkmh_requestForCategoryIdentifier:(id)arg1;

@end
