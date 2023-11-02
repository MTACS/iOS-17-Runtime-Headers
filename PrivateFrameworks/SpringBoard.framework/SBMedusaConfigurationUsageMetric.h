
@interface SBMedusaConfigurationUsageMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    long long  _currentFloatingConfig;
    long long  _currentSpaceConfig;
    double  _floatingAppActivationTimestamp;
    PETDistributionEventTracker * _floatingAppSessionTimeTracker;
    bool  _isFloatingActive;
    bool  _isPIPVideoActive;
    PETScalarEventTracker * _medusaUsageTracker;
    double  _pipVideoActivationTimestamp;
    PETDistributionEventTracker * _pipVideoSessionTimeTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_floatingAppIsActiveForConfiguration:(long long)arg1;
- (void)_trackMedusaConfigChange;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
