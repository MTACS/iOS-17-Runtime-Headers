
@interface ATXUserMetricsLogger : NSObject {
    NSObject<ATXUserMetricsLoggerTarget> * _target;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)storeUserMetric:(id)arg1;
- (void)storeUserMetric:(id)arg1 forceUserId:(id)arg2;

@end
