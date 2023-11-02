
@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent {
    NSString * _error;
}

@property (nonatomic, retain) NSString *error;

+ (id)eventWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithError:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setError:(id)arg1;

@end
