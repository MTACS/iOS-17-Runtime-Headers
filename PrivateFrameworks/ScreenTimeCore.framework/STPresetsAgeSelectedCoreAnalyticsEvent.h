
@interface STPresetsAgeSelectedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    long long  _lowerBoundAgeRange;
    NSString * _sessionId;
    long long  _upperBoundAgeRange;
}

@property (readonly, copy) NSString *description;
@property (readonly) long long lowerBoundAgeRange;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *sessionId;
@property (readonly) long long upperBoundAgeRange;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)arg1 lowerBoundAgeRange:(long long)arg2 upperBoundAgeRange:(long long)arg3;
- (long long)lowerBoundAgeRange;
- (id)name;
- (id)payload;
- (id)sessionId;
- (long long)upperBoundAgeRange;

@end
