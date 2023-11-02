
@interface CALNTriggeredEventNotificationTriggerData : NSObject {
    NSString * _alarmID;
    EKTravelEngineHypothesis * _hypothesis;
    bool  _isOffsetFromTravelTimeStart;
    unsigned long long  _trigger;
}

@property (nonatomic, readonly, copy) NSString *alarmID;
@property (nonatomic, readonly) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic, readonly) bool isOffsetFromTravelTimeStart;
@property (nonatomic, readonly) unsigned long long trigger;

- (void).cxx_destruct;
- (id)alarmID;
- (id)description;
- (id)hypothesis;
- (id)initWithTrigger:(unsigned long long)arg1 alarmID:(id)arg2 isOffsetFromTravelTimeStart:(bool)arg3 hypothesis:(id)arg4;
- (bool)isOffsetFromTravelTimeStart;
- (unsigned long long)trigger;

@end
