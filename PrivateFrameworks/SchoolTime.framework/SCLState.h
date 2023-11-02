
@interface SCLState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _activeState;
    bool  _inSchedule;
    bool  _scheduleEnabled;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) unsigned long long activeState;
@property (getter=isInSchedule, nonatomic, readonly) bool inSchedule;
@property (getter=isScheduleEnabled, nonatomic, readonly) bool scheduleEnabled;

+ (bool)supportsSecureCoding;

- (unsigned long long)activeState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActive:(bool)arg1 scheduleEnabled:(bool)arg2 inSchedule:(bool)arg3;
- (id)initWithActiveState:(unsigned long long)arg1 scheduleEnabled:(bool)arg2 inSchedule:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isInSchedule;
- (bool)isScheduleEnabled;

@end
