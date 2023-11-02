
@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _activeModeUUID;
    DNDClientEventDetails * _eventDetails;
    unsigned long long  _interruptionSuppression;
    unsigned long long  _resolutionReason;
}

@property (nonatomic, readonly, copy) NSUUID *activeModeUUID;
@property (nonatomic, readonly, copy) DNDClientEventDetails *eventDetails;
@property (nonatomic, readonly) unsigned long long interruptionSuppression;
@property (readonly, copy) NSString *redactedDescription;
@property (nonatomic, readonly) unsigned long long resolutionReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForRedacted:(bool)arg1;
- (id)activeModeUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDetails;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2 resolutionReason:(unsigned long long)arg3 activeModeUUID:(id)arg4;
- (unsigned long long)interruptionSuppression;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (unsigned long long)resolutionReason;

@end
