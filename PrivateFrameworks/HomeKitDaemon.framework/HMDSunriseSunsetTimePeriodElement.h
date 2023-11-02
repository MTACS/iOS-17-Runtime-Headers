
@interface HMDSunriseSunsetTimePeriodElement : HMDTimePeriodElement <HMDBulletinNotificationRegistrationRemoteCoding, NSCopying, NSSecureCoding> {
    NSDateComponents * _offset;
    NSString * _significantEvent;
}

@property (readonly, copy) NSDateComponents *offset;
@property (readonly, copy) NSString *significantEvent;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)offset;
- (id)serializedRegistrationForRemoteMessage;
- (id)significantEvent;

@end
