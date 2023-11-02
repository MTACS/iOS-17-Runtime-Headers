
@interface HKChartOverlaySelectedAnalyticsEventConfiguration : NSObject {
    NSString * _currentContextItemPropertyName;
    NSString * _eventName;
    NSString * _featureIdentifier;
    NSObject<OS_os_log> * _loggingCategory;
    NSNumber * _minimumAge;
    NSString * _previousContextItemPropertyName;
}

@property (nonatomic, readonly, copy) NSString *currentContextItemPropertyName;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (nonatomic, copy) NSString *featureIdentifier;
@property (nonatomic, retain) NSObject<OS_os_log> *loggingCategory;
@property (nonatomic, retain) NSNumber *minimumAge;
@property (nonatomic, readonly, copy) NSString *previousContextItemPropertyName;

- (void).cxx_destruct;
- (id)currentContextItemPropertyName;
- (id)eventName;
- (id)featureIdentifier;
- (id)initWithEventName:(id)arg1 previousContextItemPropertyName:(id)arg2 currentContextItemPropertyName:(id)arg3;
- (id)loggingCategory;
- (id)minimumAge;
- (id)previousContextItemPropertyName;
- (void)setFeatureIdentifier:(id)arg1;
- (void)setLoggingCategory:(id)arg1;
- (void)setMinimumAge:(id)arg1;

@end
