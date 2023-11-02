
@interface HMCoreAnalyticsMetricEvent : HMFObject {
    NSError * _error;
    NSString * _name;
}

@property (retain) NSError *error;
@property (readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)error;
- (id)eventPayload;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setError:(id)arg1;

@end
