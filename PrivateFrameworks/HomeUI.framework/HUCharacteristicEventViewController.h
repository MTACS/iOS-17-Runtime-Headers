
@interface HUCharacteristicEventViewController : HUItemTableViewController <HUEventUIFlowViewController, HUPickerCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUTriggerConditionEditorItemModuleController * _conditionModuleController;
    HFCharacteristicEventBuilderItem * _eventBuilderItem;
    HUEventUIFlow * _flow;
    HUCharacteristicEventOptionItem * _selectedEventOptionItem;
    NSString * _stepIdentifier;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUCharacteristicEventItemManager *itemManager;
@property (nonatomic, retain) HUCharacteristicEventOptionItem *selectedEventOptionItem;
@property (nonatomic, retain) NSString *stepIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (bool)_canCommitTriggerBuilder;
- (bool)_canContinue;
- (id)_commitTriggerBuilder;
- (void)_doneButtonPressed:(id)arg1;
- (void)_nextButtonPressed:(id)arg1;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;
- (void)_validateNextButton;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)conditionModuleController;
- (id)eventBuilderItem;
- (id)flow;
- (id)initWithEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2;
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)itemModuleControllers;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (bool)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (id)selectedEventOptionItem;
- (void)setEventBuilderItem:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setSelectedEventOptionItem:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)stepIdentifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
