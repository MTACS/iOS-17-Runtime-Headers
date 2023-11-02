
@interface HUEventUIFlow : NSObject {
    <HUEventUIFlowDelegate> * _delegate;
    HFEventBuilderItem * _eventBuilderItem;
    unsigned long long  _eventType;
    bool  _isPresentedModally;
    HFEventBuilderItem * _originalEventBuilderItem;
    <HUEventUIFlowPresentationController> * _presentationController;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic) <HUEventUIFlowDelegate> *delegate;
@property (nonatomic, retain) HFEventBuilderItem *eventBuilderItem;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) bool isPresentedModally;
@property (nonatomic, readonly) HFEventBuilderItem *originalEventBuilderItem;
@property (nonatomic) <HUEventUIFlowPresentationController> *presentationController;
@property (nonatomic, retain) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_characteristicSelectionStepForEventType:(unsigned long long)arg1;
- (id)_createViewControllerWithClass:(Class)arg1 step:(id)arg2;
- (id)_emptyConfigurationInitialStep;
- (id)_initialEventBuilderItemForType:(unsigned long long)arg1;
- (id)_initialStepForEventType:(unsigned long long)arg1;
- (void)_presentViewControllerForStep:(id)arg1;
- (id)_stepFolowingStep:(id)arg1;
- (id)_summaryStepForEventType:(unsigned long long)arg1;
- (void)_updateEventTypeFromBuilder;
- (Class)_viewControllerClassForStep:(id)arg1;
- (id)_viewControllerForStep:(id)arg1;
- (id)buildInitialViewController;
- (bool)characteristicEditorAllowChangingCharacteristic:(id)arg1;
- (void)characteristicEditorDidSelectToChangeCharacteristic:(id)arg1;
- (id)delegate;
- (id)eventBuilderItem;
- (unsigned long long)eventType;
- (id)initWithTriggerBuilder:(id)arg1 eventBuilderItem:(id)arg2;
- (bool)isFlowCompleteAfterStep:(id)arg1;
- (bool)isPresentedModally;
- (id)originalEventBuilderItem;
- (id)presentationController;
- (void)setDelegate:(id)arg1;
- (void)setEventBuilderItem:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setIsPresentedModally:(bool)arg1;
- (void)setPresentationController:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (bool)shouldSaveEventBuildersToTriggerBuilderForStep:(id)arg1;
- (bool)shouldShowDoneButtonForStep:(id)arg1;
- (bool)shouldShowNextButtonForStep:(id)arg1;
- (id)triggerBuilder;
- (void)viewController:(id)arg1 didCancelStepWithIdentifier:(id)arg2;
- (void)viewController:(id)arg1 didFinishStepWithIdentifier:(id)arg2;
- (void)viewController:(id)arg1 didSelectEventType:(unsigned long long)arg2;
- (unsigned long long)viewController:(id)arg1 servicePickerSourceForStep:(id)arg2;

@end
