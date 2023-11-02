
@interface HUCharacteristicEventServicePickerContentViewController : HUSelectableServiceGridViewController <HUEventUIFlowViewController, HUServiceGridItemManagerDelegate> {
    HFCharacteristicEventBuilderItem * _eventBuilderItem;
    id /* block */  _filter;
    HUEventUIFlow * _flow;
    <HUCharacteristicEventServicePickerContentViewControllerDelegate> * _servicePickerDelegate;
    unsigned long long  _source;
    NSString * _stepIdentifier;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUCharacteristicEventServicePickerContentViewControllerDelegate> *servicePickerDelegate;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, retain) NSString *stepIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

+ (id)splitCharacteristicResults;
+ (id /* block */)transformationSetBlock;

- (void).cxx_destruct;
- (void)_addCharacteristicEventsForAlarmItem:(id)arg1;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (id)eventBuilderItem;
- (id /* block */)filter;
- (id)flow;
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 eventBuilderItem:(id)arg2 source:(unsigned long long)arg3;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (id)servicePickerDelegate;
- (void)setFilter:(id /* block */)arg1;
- (void)setFlow:(id)arg1;
- (void)setServicePickerDelegate:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (unsigned long long)source;
- (id)stepIdentifier;
- (id)triggerBuilder;
- (void)viewDidLoad;

@end
