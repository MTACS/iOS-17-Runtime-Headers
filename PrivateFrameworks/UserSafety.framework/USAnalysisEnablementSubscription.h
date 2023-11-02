
@interface USAnalysisEnablementSubscription : NSObject {
    SCSensitivityAnalysisAvailabilityObserver * _analysisAvailabilityObserver;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithObserver:(id)arg1;

@end
