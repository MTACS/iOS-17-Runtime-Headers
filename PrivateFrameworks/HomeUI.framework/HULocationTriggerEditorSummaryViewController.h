
@interface HULocationTriggerEditorSummaryViewController : HUItemTableViewController <HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUTriggerConditionEditorItemModuleController * _conditionEditorModuleController;
    <HUTriggerEditorDelegate> * _delegate;
    unsigned long long  _mode;
    HFEventTriggerBuilder * _triggerBuilder;
    HUPresenceUserPickerItemModuleController * _userPickerModuleController;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HULocationTriggerEditorSummaryItemManager *itemManager;
@property (nonatomic, readonly) unsigned long long mode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;
@property (nonatomic, readonly) HUPresenceUserPickerItemModuleController *userPickerModuleController;

+ (id)defaultLocationEventBuilderForHome:(id)arg1 eventType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_showActionEditor:(id)arg1;
- (void)_showSummary:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)conditionEditorModuleController;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)delegate;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)itemModuleControllers;
- (unsigned long long)mode;
- (void)presenceUserPickerItemModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)regionEditor:(id)arg1 didFinishWithRegion:(id)arg2;
- (void)regionEditorDidCancel:(id)arg1;
- (void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)triggerBuilder;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)userPickerModuleController;
- (void)viewDidLoad;

@end
