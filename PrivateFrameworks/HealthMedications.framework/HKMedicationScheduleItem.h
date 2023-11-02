
@interface HKMedicationScheduleItem : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _doses;
    NSString * _identifier;
    bool  _notificationSent;
    NSDate * _scheduledDateTime;
}

@property (nonatomic, readonly, copy) NSArray *doses;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool notificationSent;
@property (nonatomic, readonly, copy) NSDate *scheduledDateTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduledDateTime:(id)arg1 notificationSent:(bool)arg2 doses:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)notificationSent;
- (id)scheduledDateTime;

@end
