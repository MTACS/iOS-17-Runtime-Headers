
@interface HKNotificationInstruction : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _categoryIdentifier;
    NSDate * _expirationDate;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSDate *expirationDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithAction:(long long)arg1 categoryIdentifier:(id)arg2 expirationDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

+ (id)categoryIdentifierFromScheduleItemIdentifier:(id)arg1;
+ (id)scheduleItemIdentifierFromCategoryIdentifier:(id)arg1;
+ (id)scheduleItemIdentifiersFromCategoryIdentifiers:(id)arg1;

- (id)initWithAction:(long long)arg1 scheduleItemIdentifier:(id)arg2;
- (id)initWithAction:(long long)arg1 scheduleItemIdentifier:(id)arg2 expirationDate:(id)arg3;
- (id)scheduleItemIdentifier;

@end
