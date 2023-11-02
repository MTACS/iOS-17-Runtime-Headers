
@interface MTTrigger : NSObject <BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding> {
    bool  _isPastOverrideEvent;
    NSDate * _triggerDate;
    unsigned long long  _triggerType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBedtimeRelated;
@property (nonatomic, readonly) bool isEvent;
@property (nonatomic, readonly) bool isForAlert;
@property (nonatomic, readonly) bool isForGoToBed;
@property (nonatomic, readonly) bool isForNotification;
@property (nonatomic, readonly) bool isForSnooze;
@property (nonatomic, readonly) bool isPastOverrideEvent;
@property (nonatomic, readonly) bool isScheduled;
@property (nonatomic, readonly) bool isWakeUpRelated;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic) unsigned long long triggerType;

+ (id)_stringForType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2;
+ (id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2 isPastOverrideEvent:(bool)arg3;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2 isPastOverrideEvent:(bool)arg3;
- (bool)isBedtimeRelated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTrigger:(id)arg1;
- (bool)isEvent;
- (bool)isForAlert;
- (bool)isForGoToBed;
- (bool)isForNotification;
- (bool)isForSnooze;
- (bool)isPastOverrideEvent;
- (bool)isScheduled;
- (bool)isWakeUpRelated;
- (void)setTriggerDate:(id)arg1;
- (void)setTriggerType:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)triggerDate;
- (unsigned long long)triggerType;

@end
