
@interface HUAvailableRelatedTriggerItemModuleController : HUItemModuleController <HFItemSectionAccessoryButtonHeaderDelegate, HUIconSwitchCellDelegate, HUTriggerEditorDelegate> {
    UIActivityIndicatorView * _addAutomationActivityIndicator;
    NAFuture * _addAutomationPresentingFuture;
    bool  _editing;
    UIViewController * _presentedViewController;
    _TriggerEditorDelegateWrapper * _presentedViewControllerDelegateWrapper;
    HUAccessoryButtonTableViewHeaderView * _sectionEditButtonHeader;
}

@property (nonatomic, retain) UIActivityIndicatorView *addAutomationActivityIndicator;
@property (nonatomic, retain) NAFuture *addAutomationPresentingFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUAvailableRelatedTriggerItemModule *module;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (nonatomic, retain) _TriggerEditorDelegateWrapper *presentedViewControllerDelegateWrapper;
@property (nonatomic) HUAccessoryButtonTableViewHeaderView *sectionEditButtonHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activateItem:(id)arg1 active:(bool)arg2;
- (void)_addAutomationCancelButtonPressed;
- (id)_addAutomationViewControllerWithActionFactories:(id)arg1;
- (id)_addAutomationViewControllerWithSensorCharacteristics:(id)arg1;
- (id)_createAddAutomationViewController;
- (id)_dismissViewController:(id)arg1;
- (void)_enableItemPressed:(id)arg1 enabled:(bool)arg2;
- (id)_handleError:(id)arg1 retryBlock:(id /* block */)arg2;
- (void)_presentAddAutomationViewController;
- (void)_presentTriggerSummaryForAvailableTriggerItem:(id)arg1;
- (void)_presentTriggerSummaryForTriggerBuilder:(id)arg1 flow:(id)arg2;
- (void)_updateUIAnimated:(bool)arg1;
- (id)addAutomationActivityIndicator;
- (id)addAutomationPresentingFuture;
- (Class)cellClassForItem:(id)arg1;
- (id)commitSelectedItems;
- (unsigned long long)didSelectItem:(id)arg1;
- (bool)editing;
- (id)initWithModule:(id)arg1;
- (void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2;
- (id)presentedViewController;
- (id)presentedViewControllerDelegateWrapper;
- (id)sectionEditButtonHeader;
- (void)setAddAutomationActivityIndicator:(id)arg1;
- (void)setAddAutomationPresentingFuture:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setPresentedViewControllerDelegateWrapper:(id)arg1;
- (void)setSectionEditButtonHeader:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)triggerEditor:(id)arg1 didCommitTriggerBuilder:(id)arg2 withError:(id)arg3;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (void)updatePresentedViewControllerForNewModuleController:(id)arg1;

@end
