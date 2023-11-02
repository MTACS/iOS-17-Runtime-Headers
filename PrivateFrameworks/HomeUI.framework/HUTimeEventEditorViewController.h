
@interface HUTimeEventEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUEventUIFlowViewController, HUInlineDatePickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUEventUIFlow * _flow;
    HUGridLayoutOptions * _layoutOptions;
    HFItem * _selectedDateOptionItem;
    NSString * _stepIdentifier;
    HFEventBuilder<HFTimeEventBuilder> * _timeEvent;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUTimeEventEditorItemManager *itemManager;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) HFItem *selectedDateOptionItem;
@property (nonatomic, retain) NSDateComponents *selectedFireTimeComponents;
@property (nonatomic, retain) NSArray *selectedRecurrences;
@property (nonatomic, retain) NSDateComponents *selectedSignificantEventOffset;
@property (nonatomic, retain) NSString *stepIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFEventBuilder<HFTimeEventBuilder> *timeEvent;
@property (nonatomic, retain) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (bool)_canCommitTriggerBuilder;
- (bool)_canContinue;
- (void)_changeFireTime:(id)arg1;
- (id)_commitTriggerBuilder;
- (void)_doneButtonPressed:(id)arg1;
- (id)_instructionsSectionIDs;
- (id)_localizedRecurrenceDescription;
- (void)_nextButtonPressed:(id)arg1;
- (id)_selectedSignificantEvent;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (void)datePickerCell:(id)arg1 didSelectDate:(id)arg2;
- (void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2;
- (id)flow;
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;
- (id)initWithTimeEvent:(id)arg1 triggerBuilder:(id)arg2;
- (id)layoutOptions;
- (id)selectedDateOptionItem;
- (id)selectedFireTimeComponents;
- (id)selectedRecurrences;
- (id)selectedSignificantEventOffset;
- (void)setFlow:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setSelectedDateOptionItem:(id)arg1;
- (void)setSelectedFireTimeComponents:(id)arg1;
- (void)setSelectedRecurrences:(id)arg1;
- (void)setSelectedSignificantEventOffset:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (void)setTimeEvent:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)stepIdentifier;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)timeEvent;
- (void)timerTriggerOffsetEditor:(id)arg1 didFinishWithOffset:(id)arg2;
- (void)timerTriggerOffsetEditorDidCancel:(id)arg1;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
