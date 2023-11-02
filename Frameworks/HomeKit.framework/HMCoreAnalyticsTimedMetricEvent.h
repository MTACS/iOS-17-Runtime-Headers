
@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent {
    NSDate * _finishedDate;
    NSDate * _startedDate;
}

@property (readonly) NSNumber *duration;
@property (copy) NSDate *finishedDate;
@property (copy) NSDate *startedDate;

- (void).cxx_destruct;
- (id)duration;
- (id)durationData;
- (id)eventPayload;
- (void)finish;
- (id)finishedDate;
- (void)setFinishedDate:(id)arg1;
- (void)setStartedDate:(id)arg1;
- (void)start;
- (id)startedDate;

@end
