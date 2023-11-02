
@interface HUEventCreationUIFlow : HUEventUIFlow <HUEventUIFlowPresentationController> {
    bool  _modalInPresentation;
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool modalInPresentation;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_emptyConfigurationInitialStep;
- (id)_initialStepForEventType:(unsigned long long)arg1;
- (id)_summaryStepForEventType:(unsigned long long)arg1;
- (id)_viewControllerForStep:(id)arg1;
- (bool)characteristicServicePickerViewControllerAllowChangingCharacteristic:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 eventBuilderItem:(id)arg2;
- (bool)modalInPresentation;
- (id)navigationController;
- (id)presentationController;
- (void)setModalInPresentation:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setupNavigationController;
- (void)transitionToViewController:(id)arg1;

@end
