
@interface HeartRateStore : NSObject {
    HKHealthStore * _healthStore;
    bool  _heartRateEnabled;
    HKQuery * _heartRateQuery;
    unsigned long long  _recentHeartRate;
    double  _recentHeartRateTime;
}

@property (nonatomic, retain) HKQuery *heartRateQuery;
@property (nonatomic) unsigned long long recentHeartRate;
@property (nonatomic) double recentHeartRateTime;

+ (id)sharedStore;

- (void).cxx_destruct;
- (void)_updateHeartRateEnabled;
- (void)_updateHeartRateWithCompletion:(id /* block */)arg1;
- (id)heartRateQuery;
- (id)init;
- (unsigned long long)recentHeartRate;
- (double)recentHeartRateTime;
- (void)recentHeartRateWithCompletion:(id /* block */)arg1;
- (void)setHeartRateQuery:(id)arg1;
- (void)setRecentHeartRate:(unsigned long long)arg1;
- (void)setRecentHeartRateTime:(double)arg1;

@end
