
@interface HKMCLoggedDataMetric : NSObject {
    NSNumber * _dayIndexLoggingOffset;
    NSDictionary * _eventPayload;
    NSString * _method;
}

@property (nonatomic, retain) NSNumber *dayIndexLoggingOffset;
@property (nonatomic, copy) NSDictionary *eventPayload;
@property (nonatomic, readonly) NSString *method;

+ (id)eventName;

- (void).cxx_destruct;
- (id)dayIndexLoggingOffset;
- (id)description;
- (id)eventPayload;
- (id)initWithMethod:(id)arg1;
- (id)method;
- (void)setDayIndexLoggingOffset:(id)arg1;
- (void)setEventPayload:(id)arg1;

@end
