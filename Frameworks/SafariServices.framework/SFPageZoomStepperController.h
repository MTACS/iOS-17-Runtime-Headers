
@interface SFPageZoomStepperController : NSObject <_SFSettingsAlertStepperController> {
    NSNumberFormatter * _percentFormatter;
    WBSPageZoomPreferenceManager * _preferenceManager;
    <_SFSettingsAlertStepperConfiguration> * _stepper;
    <_SFBrowserDocument> * _tab;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pageZoomChanged:(id)arg1;
- (void)_updateButtonsEnabledOnMainQueueWithZoomFactor:(double)arg1;
- (void)_updateButtonsEnabledWithZoomFactor:(double)arg1;
- (void)dealloc;
- (void)decrementValue:(id)arg1;
- (void)incrementValue:(id)arg1;
- (id)initWithDocument:(id)arg1 preferenceManager:(id)arg2;
- (id)longestTextForButton:(long long)arg1;
- (void)prepareStepper:(id)arg1;
- (void)resetValue:(id)arg1;

@end
