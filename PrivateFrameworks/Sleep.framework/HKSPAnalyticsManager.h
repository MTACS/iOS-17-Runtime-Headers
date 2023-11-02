
@interface HKSPAnalyticsManager : NSObject {
    id /* block */  _analyticsEventConsumer;
    HKSPAnalyticsStore * _analyticsStore;
    id /* block */  _diagnosticsOptInStatusProvider;
    id /* block */  _ihaOptInStatusProvider;
}

@property (nonatomic, copy) id /* block */ analyticsEventConsumer;
@property (nonatomic, retain) HKSPAnalyticsStore *analyticsStore;
@property (nonatomic, copy) id /* block */ diagnosticsOptInStatusProvider;
@property (nonatomic, copy) id /* block */ ihaOptInStatusProvider;

+ (id)activePairedWatchProductType;
+ (id)currentDeviceType;
+ (bool)defaultIsDiagnosticDataSubmissionAllowed;

- (void).cxx_destruct;
- (id /* block */)analyticsEventConsumer;
- (id)analyticsStore;
- (id /* block */)diagnosticsOptInStatusProvider;
- (id /* block */)ihaOptInStatusProvider;
- (id)initWithUserDefaults:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 ihaOptInStatusProvider:(id /* block */)arg2 diagnosticsOptInStatusProvider:(id /* block */)arg3 analyticsEventConsumer:(id /* block */)arg4;
- (bool)isDiagnosticDataSubmissionAllowed;
- (bool)isImproveHealthAndActivitySubmissionAllowed;
- (void)setAnalyticsEventConsumer:(id /* block */)arg1;
- (void)setAnalyticsStore:(id)arg1;
- (void)setDiagnosticsOptInStatusProvider:(id /* block */)arg1;
- (void)setIhaOptInStatusProvider:(id /* block */)arg1;
- (void)trackEvent:(id)arg1;
- (void)trackEvents:(id)arg1;

@end
