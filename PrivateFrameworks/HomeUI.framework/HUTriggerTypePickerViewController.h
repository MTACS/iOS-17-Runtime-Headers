
@interface HUTriggerTypePickerViewController : HUItemTableViewController <HURecommendedTriggerItemModuleControllerDelegate, HUTriggerEditorDelegate> {
    HFActionSetBuilder * _actionSetBuilder;
    NSArray * _anonymousActionBuilders;
    <HUTriggerEditorDelegate> * _delegate;
    HURecommendedTriggerItemModuleController * _recommendationModuleController;
}

@property (nonatomic, retain) HFActionSetBuilder *actionSetBuilder;
@property (nonatomic, retain) NSArray *anonymousActionBuilders;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUTriggerTypePickerItemManager *itemManager;
@property (nonatomic, readonly) HURecommendedTriggerItemModuleController *recommendationModuleController;
@property (nonatomic) bool showSuggestedAutomations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (id)_createTriggerBuilderOfClass:(Class)arg1;
- (id)_createTriggerEditorForItem:(id)arg1;
- (id)actionSetBuilder;
- (id)anonymousActionBuilders;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)initWithActionSetBuilder:(id)arg1 anonymousActionBuilders:(id)arg2 delegate:(id)arg3;
- (id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2;
- (id)recommendationModuleController;
- (void)recommendedTriggerModuleController:(id)arg1 didSelectToOpenTriggerBuilder:(id)arg2;
- (void)recommendedTriggerModuleControllerDidSelectShowMore:(id)arg1;
- (void)setActionSetBuilder:(id)arg1;
- (void)setAnonymousActionBuilders:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowSuggestedAutomations:(bool)arg1;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)showSuggestedAutomations;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)triggerEditor:(id)arg1 didCommitTriggerBuilder:(id)arg2 withError:(id)arg3;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
