
@interface ATXPeriodicLogger : NSObject {
    bool  _enrolled;
    double  _enrollmentPeriod;
    double  _enrollmentRate;
    NSDate * _lastEnrolled;
    NSDate * _lastSent;
    NSArray * _sources;
    double  _uploadInterval;
}

+ (double)getEnrollmentRate;
+ (id)readDateFromDefaultsForKey:(id)arg1;
+ (bool)readEnrollmentFromDefaults;
+ (id)readLastEnrolledFromDefaults;
+ (id)readLastSentFromDefaults;

- (void).cxx_destruct;
- (void)clearUserId;
- (id)compileAndSendMetrics:(id)arg1;
- (id)compileLog;
- (id)convertDictionaryToDataUnits:(id)arg1;
- (bool)determineEnrollment;
- (id)generateUserId;
- (bool)getEnrollment;
- (id)getLastEnrolled;
- (id)getLastSent;
- (id)getUserId;
- (bool)hasEnrollmentExpired:(id)arg1;
- (id)init;
- (id)initWithSources:(id)arg1 uploadInterval:(double)arg2 enrollmentPeriod:(double)arg3 enrollmentRate:(double)arg4;
- (bool)isItTimeYet:(id)arg1;
- (void)overrideEnrollmentRate:(double)arg1;
- (id)sendMetricsAtThisTime:(id)arg1;
- (void)sendMetricsIfNeeded;
- (id)sendMetricsIfNeededAtThisTime:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setEnabledOnSourcesTo:(bool)arg1;
- (void)setEnrollment:(bool)arg1;
- (void)setLastEnrolledToTime:(id)arg1;
- (void)setLastSentToTime:(id)arg1;
- (void)submit:(id)arg1;

@end
