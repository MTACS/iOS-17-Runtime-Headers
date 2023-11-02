
@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {
    NAFuture * _characteristicReadFuture;
    UINavigationItem * _effectiveNavigationItem;
    HFCharacteristicEventBuilderItem * _eventBuilderItem;
    id /* block */  _filter;
    unsigned long long  _mode;
    unsigned long long  _source;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, retain) NAFuture *characteristicReadFuture;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UINavigationItem *effectiveNavigationItem;
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (nonatomic, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

+ (id)getThresholdRangeValueForCharacteristics:(id)arg1 inHome:(id)arg2;
+ (id)splitCharacteristicResults;
+ (id /* block */)transformationSetBlock;

- (void).cxx_destruct;
- (void)_addCharacteristicEventsForAlarmItem:(id)arg1;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1;
- (void)_addTriggerValue:(id)arg1 forCharacteristics:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_next:(id)arg1;
- (void)_validateNextButton;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (id)characteristicReadFuture;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (id)effectiveNavigationItem;
- (id)eventBuilderItem;
- (id /* block */)filter;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 eventBuilderItem:(id)arg2 mode:(unsigned long long)arg3 source:(unsigned long long)arg4 effectiveNavigationItem:(id)arg5 delegate:(id)arg6;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (unsigned long long)mode;
- (bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)setCharacteristicReadFuture:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (unsigned long long)source;
- (id)triggerBuilder;
- (void)viewDidLoad;

@end
