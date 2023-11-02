
@interface HKMCScheduledAnalysisMetric : NSObject {
    NSDictionary * _eventPayload;
    long long  _timeSuccessful;
}

@property (nonatomic, copy) NSDictionary *eventPayload;
@property (nonatomic) long long timeSuccessful;

+ (id)eventName;

- (void).cxx_destruct;
- (id)description;
- (id)eventPayload;
- (id)initWithTimeSuccessful:(long long)arg1;
- (void)setEventPayload:(id)arg1;
- (void)setTimeSuccessful:(long long)arg1;
- (long long)timeSuccessful;

@end
