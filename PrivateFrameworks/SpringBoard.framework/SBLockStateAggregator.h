
@interface SBLockStateAggregator : NSObject {
    SBFAnalyticsClient * _analyticsClient;
    unsigned long long  _lockState;
}

@property (nonatomic) SBFAnalyticsClient *analyticsClient;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_descriptionForLockState:(unsigned long long)arg1;
- (id)_initWithAnalyticsClient:(id)arg1;
- (void)_updateLockState;
- (id)analyticsClient;
- (void)dealloc;
- (id)description;
- (bool)hasAnyLockState;
- (id)init;
- (unsigned long long)lockState;
- (void)setAnalyticsClient:(id)arg1;

@end
