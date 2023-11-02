
@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _alarmID;
    bool  _hasDisplayedLeaveByMessage;
    bool  _hasDisplayedLeaveNowMessage;
    bool  _hasDisplayedRunningLateMessage;
    EKTravelEngineHypothesis * _hypothesis;
    bool  _isOffsetFromTravelTimeStart;
    NSDate * _lastFireTimeOfAlertOffsetFromTravelTime;
    NSDate * _lastTimeNotificationAdded;
}

@property (nonatomic, readonly, copy) NSString *alarmID;
@property (nonatomic, readonly) bool hasDisplayedLeaveByMessage;
@property (nonatomic, readonly) bool hasDisplayedLeaveNowMessage;
@property (nonatomic, readonly) bool hasDisplayedRunningLateMessage;
@property (nonatomic, readonly, copy) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic, readonly) bool isOffsetFromTravelTimeStart;
@property (nonatomic, readonly, copy) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (nonatomic, readonly, copy) NSDate *lastTimeNotificationAdded;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlarmID:(id)arg1 isOffsetFromTravelTimeStart:(bool)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hypothesis:(id)arg4 hasDisplayedLeaveByMessage:(bool)arg5 hasDisplayedLeaveNowMessage:(bool)arg6 hasDisplayedRunningLateMessage:(bool)arg7 lastTimeNotificationAdded:(id)arg8;
- (id)alarmID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDisplayedLeaveByMessage;
- (bool)hasDisplayedLeaveNowMessage;
- (bool)hasDisplayedRunningLateMessage;
- (id)hypothesis;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNotificationData:(id)arg1;
- (bool)isOffsetFromTravelTimeStart;
- (id)lastFireTimeOfAlertOffsetFromTravelTime;
- (id)lastTimeNotificationAdded;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
