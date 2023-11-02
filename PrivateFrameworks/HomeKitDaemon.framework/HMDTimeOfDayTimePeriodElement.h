
@interface HMDTimeOfDayTimePeriodElement : HMDTimePeriodElement <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _hour;
    unsigned long long  _minute;
}

@property (readonly) unsigned long long hour;
@property (readonly) unsigned long long minute;

+ (bool)supportsSecureCoding;
+ (id)type;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minute;
- (id)serializedRegistrationForRemoteMessage;

@end
