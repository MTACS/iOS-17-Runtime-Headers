
@interface HUTimerTriggerEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUInlineDatePickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUTriggerConditionEditorItemModuleController * _conditionModuleController;
    <HUTriggerEditorDelegate> * _delegate;
    HUGridLayoutOptions * _layoutOptions;
    unsigned long long  _mode;
    HFItem * _selectedDateOptionItem;
    HFTimerTriggerBuilder * _timerTriggerBuilder;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUTimerTriggerEditorItemManager *itemManager;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) HFItem *selectedDateOptionItem;
@property (nonatomic, retain) NSDateComponents *selectedFireTimeComponents;
@property (nonatomic, retain) NSArray *selectedRecurrences;
@property (nonatomic, retain) NSDateComponents *selectedSignificantEventOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFTimerTriggerBuilder *timerTriggerBuilder;

- (void).cxx_destruct;
- (bool)_canCommitTriggerBuilder;
- (bool)_canContinue;
- (void)_cancel:(id)arg1;
- (void)_changeFireTime:(id)arg1;
- (id)_commitTriggerBuilder;
- (id)_instructionsSectionIDs;
- (id)_localizedRecurrenceDescription;
- (id)_selectedSignificantEvent;
- (void)_showActionEditor:(id)arg1;
- (void)_showSummary:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)conditionModuleController;
- (void)datePickerCell:(id)arg1 didSelectDate:(id)arg2;
- (void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2;
- (id)delegate;
- (id)initWithTimerTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)itemModuleControllers;
- (id)layoutOptions;
- (unsigned long long)mode;
- (id)selectedDateOptionItem;
- (id)selectedFireTimeComponents;
- (id)selectedRecurrences;
- (id)selectedSignificantEventOffset;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSelectedDateOptionItem:(id)arg1;
- (void)setSelectedFireTimeComponents:(id)arg1;
- (void)setSelectedRecurrences:(id)arg1;
- (void)setSelectedSignificantEventOffset:(id)arg1;
- (void)setTimerTriggerBuilder:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)timerTriggerBuilder;
- (void)timerTriggerOffsetEditor:(id)arg1 didFinishWithOffset:(id)arg2;
- (void)timerTriggerOffsetEditorDidCancel:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewWillAppear:(bool)arg1;

@end
