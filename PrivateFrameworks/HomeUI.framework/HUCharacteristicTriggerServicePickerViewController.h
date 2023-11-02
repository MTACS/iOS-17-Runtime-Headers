
@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController {
    HFCharacteristicEventBuilderItem * _eventBuilder;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilder;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

+ (bool)adoptsDefaultGridLayoutMargins;
+ (bool)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2;
+ (unsigned long long)sourceForTriggerBuilder:(id)arg1;

- (void).cxx_destruct;
- (id)characteristicTriggerBuilder;
- (id)delegate;
- (id)eventBuilder;
- (id /* block */)filter;
- (id)initWithEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2 mode:(unsigned long long)arg3 source:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (unsigned long long)mode;
- (id)servicePickerContentViewController;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (unsigned long long)source;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
