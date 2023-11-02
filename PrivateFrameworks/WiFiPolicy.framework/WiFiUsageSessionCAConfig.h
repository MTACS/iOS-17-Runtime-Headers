
@interface WiFiUsageSessionCAConfig : NSObject {
    NSDate * _ca_lastSubmission;
    double  _ca_minTimeIntervalBetweenSubmissions;
    unsigned long long  _ca_sampling;
}

@property (nonatomic, readonly) NSDate *ca_lastSubmission;
@property (nonatomic, readonly) double ca_minTimeIntervalBetweenSubmissions;
@property (nonatomic, readonly) unsigned long long ca_sampling;

- (void).cxx_destruct;
- (id)ca_lastSubmission;
- (double)ca_minTimeIntervalBetweenSubmissions;
- (unsigned long long)ca_sampling;
- (bool)canSubmit;
- (void)countSubmission;
- (id)description;
- (id)initWithSampling:(unsigned long long)arg1 minInterval:(double)arg2;

@end
