
@interface HUCharacteristicEventServicePickerViewController : HUInstructionsTableViewController <HUCharacteristicEventServicePickerContentViewControllerDelegate, HUEventUIFlowViewController> {
    HFCharacteristicEventBuilderItem * _eventBuilder;
    HUEventUIFlow * _flow;
    NSString * _stepIdentifier;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilder;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUCharacteristicEventServicePickerContentViewController *servicePickerContentViewController;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, retain) NSString *stepIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

+ (bool)adoptsDefaultGridLayoutMargins;
+ (bool)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2;
+ (unsigned long long)sourceForTriggerBuilder:(id)arg1;

- (void).cxx_destruct;
- (void)_next:(id)arg1;
- (void)characteristicEventServicePickerContentViewController:(id)arg1 didChangeNumberOfSelectedItems:(unsigned long long)arg2;
- (id)characteristicTriggerBuilder;
- (id)eventBuilder;
- (id /* block */)filter;
- (id)flow;
- (id)initWithEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2 source:(unsigned long long)arg3;
- (id)initWithEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2 source:(unsigned long long)arg3 flow:(id)arg4 stepIdentifier:(id)arg5;
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (id)servicePickerContentViewController;
- (void)setFilter:(id /* block */)arg1;
- (void)setFlow:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (unsigned long long)source;
- (id)stepIdentifier;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
