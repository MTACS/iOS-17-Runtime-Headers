
@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>

@property (nonatomic, copy) NSString *alarmID;
@property (nonatomic) bool hasDisplayedLeaveByMessage;
@property (nonatomic) bool hasDisplayedLeaveNowMessage;
@property (nonatomic) bool hasDisplayedRunningLateMessage;
@property (nonatomic, copy) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic) bool isOffsetFromTravelTimeStart;
@property (nonatomic, copy) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (nonatomic, copy) NSDate *lastTimeNotificationAdded;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlarmID:(id)arg1;
- (void)setHasDisplayedLeaveByMessage:(bool)arg1;
- (void)setHasDisplayedLeaveNowMessage:(bool)arg1;
- (void)setHasDisplayedRunningLateMessage:(bool)arg1;
- (void)setHypothesis:(id)arg1;
- (void)setIsOffsetFromTravelTimeStart:(bool)arg1;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(id)arg1;
- (void)setLastTimeNotificationAdded:(id)arg1;

@end
