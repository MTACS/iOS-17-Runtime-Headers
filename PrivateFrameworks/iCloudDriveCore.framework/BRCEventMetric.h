
@interface BRCEventMetric : NSObject {
    CKEventMetric * _associatedCKEventMetricIfAvailable;
    NSDate * _endTime;
    NSString * _eventName;
    bool  _isCKMetric;
    NSDate * _startTime;
}

@property (nonatomic, readonly) CKEventMetric *associatedCKEventMetricIfAvailable;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic) bool isCKMetric;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (id)additionalPayload;
- (void)associateWithCompletedOperation:(id)arg1;
- (id)associatedAppTelemetryEvent;
- (id)associatedCKEventMetricIfAvailable;
- (id)description;
- (double)duration;
- (id)endTime;
- (id)eventName;
- (id)initWithEventName:(id)arg1;
- (bool)isCKMetric;
- (void)setEndTime:(id)arg1;
- (void)setIsCKMetric:(bool)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (id)subDescription;

@end
