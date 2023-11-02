
@interface HAENotificationEvent : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * dateInterval;
    unsigned int  eventType;
    double  level;
    NSDictionary * metadata;
    NSUUID * uuid;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned int eventType;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)eventType;
- (id)getEventTypeString;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1 exposureLevel:(double)arg2 dateInterval:(id)arg3 metadata:(id)arg4;
- (double)level;
- (id)metadata;
- (id)uuid;

@end
