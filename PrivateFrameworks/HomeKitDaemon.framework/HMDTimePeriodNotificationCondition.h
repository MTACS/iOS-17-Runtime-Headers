
@interface HMDTimePeriodNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding> {
    HMDTimePeriodElement * _endElement;
    HMDTimePeriodElement * _startElement;
}

@property (readonly) HMDTimePeriodElement *endElement;
@property (readonly) HMDTimePeriodElement *startElement;

+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endElement;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartElement:(id)arg1 endElement:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;
- (id)startElement;
- (id)timePeriodElementFromDictionary:(id)arg1;

@end
