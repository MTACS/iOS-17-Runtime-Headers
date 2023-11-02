
@interface SFReaderTextSizeStepperController : NSObject <_SFSettingsAlertStepperController> {
    <SFReaderContext> * _readerContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateStepperControls:(id)arg1;
- (void)decrementValue:(id)arg1;
- (void)incrementValue:(id)arg1;
- (id)initWithReaderContext:(id)arg1;
- (void)prepareStepper:(id)arg1;

@end
