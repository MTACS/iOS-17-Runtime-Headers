
@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController <HUPickerCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUTriggerConditionEditorItemModuleController * _conditionModuleController;
    <HUTriggerEditorDelegate> * _delegate;
    HFCharacteristicEventBuilderItem * _eventBuilderItem;
    unsigned long long  _mode;
    HUCharacteristicEventOptionItem * _selectedEventOptionItem;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUCharacteristicTriggerEventItemManager *itemManager;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) HUCharacteristicEventOptionItem *selectedEventOptionItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (bool)_canCommitTriggerBuilder;
- (bool)_canContinue;
- (void)_cancel:(id)arg1;
- (id)_commitTriggerBuilder;
- (void)_showActionEditor:(id)arg1;
- (void)_showSummary:(id)arg1;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;
- (void)_validateNextButton;
- (bool)automaticallyUpdatesViewControllerTitle;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)conditionModuleController;
- (id)delegate;
- (id)eventBuilderItem;
- (id)initWithCharacteristicEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2 mode:(unsigned long long)arg3 delegate:(id)arg4;
- (void)itemManagerDidUpdate:(id)arg1;
- (unsigned long long)mode;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (bool)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (id)selectedEventOptionItem;
- (void)setDelegate:(id)arg1;
- (void)setEventBuilderItem:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSelectedEventOptionItem:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visibleTriggerValuesForItem:(id)arg1;

@end
