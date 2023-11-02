
@interface HUTriggerActionSetsModuleController : HUItemModuleController <HUEmbeddedTriggerActionGridViewControllerDelegate, HUEmbeddedTriggerActionSetGridViewControllerDelegate> {
    HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> * _actionSetsGridViewController;
    HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> * _actionsGridViewController;
    <HUTriggerActionSetsModuleControllerDelegate> * _delegate;
    HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> * _prioritizedActionsGridViewController;
}

@property (nonatomic, readonly) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionSetsGridViewController;
@property (nonatomic, readonly) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionsGridViewController;
@property (nonatomic) <HUTriggerActionSetsModuleControllerDelegate> *delegate;
@property (nonatomic, readonly) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *prioritizedActionsGridViewController;

- (void).cxx_destruct;
- (id)actionSetsGridViewController;
- (id)actionsGridViewController;
- (Class)cellClassForItem:(id)arg1;
- (id)childViewControllersToPreload;
- (id)delegate;
- (id)prioritizedActionsGridViewController;
- (void)reloadActions;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)triggerActionGridViewController:(id)arg1 didUpdate:(id)arg2;
- (void)triggerActionSetGridViewController:(id)arg1 didUpdate:(id)arg2;

@end
