
@interface HULocationEventEditorSummaryViewController : HUItemTableViewController <HUEventUIFlowViewController, HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate> {
    HUTriggerConditionEditorItemModuleController * _conditionEditorModuleController;
    HUEventUIFlow * _flow;
    NSString * _stepIdentifier;
    HUPresenceUserPickerItemModuleController * _userPickerModuleController;
}

@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HULocationEventEditorSummaryItemManager *itemManager;
@property (nonatomic, retain) NSString *stepIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUPresenceUserPickerItemModuleController *userPickerModuleController;

+ (id)defaultLocationEventBuilderForHome:(id)arg1 eventType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_doneButtonPressed:(id)arg1;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)conditionEditorModuleController;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)flow;
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)presenceUserPickerItemModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)regionEditor:(id)arg1 didFinishWithRegion:(id)arg2;
- (void)regionEditorDidCancel:(id)arg1;
- (void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)stepIdentifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)userPickerModuleController;
- (void)viewDidLoad;

@end
