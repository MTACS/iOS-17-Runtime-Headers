
@interface AIAudiogramConfirmResultsViewController : OBWelcomeController {
    unsigned long long  _analyticsClient;
    bool  _analyticsDidCompleteIngestion;
    bool  _analyticsDidMakeAdjustments;
    unsigned long long  _analyticsImportSource;
    HKAudiogramSample * _audiogram;
    <AIAudiogramConfirmResultsViewControllerDelegate> * _delegate;
    HKHealthStore * _healthStore;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic) unsigned long long analyticsClient;
@property (nonatomic) bool analyticsDidCompleteIngestion;
@property (nonatomic) bool analyticsDidMakeAdjustments;
@property (nonatomic) unsigned long long analyticsImportSource;
@property (nonatomic, retain) HKAudiogramSample *audiogram;
@property (nonatomic) <AIAudiogramConfirmResultsViewControllerDelegate> *delegate;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (void)_saveToHealth:(id)arg1;
- (unsigned long long)analyticsClient;
- (bool)analyticsDidCompleteIngestion;
- (bool)analyticsDidMakeAdjustments;
- (unsigned long long)analyticsImportSource;
- (id)audiogram;
- (id)delegate;
- (id)healthStore;
- (id)initWithDelegate:(id)arg1 audiogram:(id)arg2;
- (void)setAnalyticsClient:(unsigned long long)arg1;
- (void)setAnalyticsDidCompleteIngestion:(bool)arg1;
- (void)setAnalyticsDidMakeAdjustments:(bool)arg1;
- (void)setAnalyticsImportSource:(unsigned long long)arg1;
- (void)setAudiogram:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setUnitPreferenceController:(id)arg1;
- (id)unitPreferenceController;
- (void)viewDidLoad;

@end
