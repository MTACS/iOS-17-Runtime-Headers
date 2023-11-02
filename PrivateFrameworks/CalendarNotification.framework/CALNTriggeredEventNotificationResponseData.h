
@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding> {
    EKTravelEngineHypothesis * _hypothesis;
    NSDate * _lastFireTimeOfAlertOffsetFromTravelTime;
}

@property (nonatomic, readonly) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic, readonly, copy) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hypothesis;
- (id)initWithCoder:(id)arg1;
- (id)initWithHypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2;
- (id)lastFireTimeOfAlertOffsetFromTravelTime;

@end
