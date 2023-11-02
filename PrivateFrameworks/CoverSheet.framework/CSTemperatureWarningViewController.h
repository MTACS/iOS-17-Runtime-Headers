
@interface CSTemperatureWarningViewController : CSModalViewControllerBase <CSModalViewDelegate> {
    <CSThermalStatusProviding> * _thermalStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (id)initWithThermalStatusProvider:(id)arg1;
- (long long)presentationPriority;
- (void)viewDidLoad;

@end
