
@interface HUTriggerEventsModuleController : HUItemModuleController <HUEventUIFlowDelegate, HUEventUIFlowPresentationController> {
    bool  _allowsEditingEvents;
    <HUTriggerEventsModuleControllerDelegate> * _delegate;
}

@property (nonatomic) bool allowsEditingEvents;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEventsModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsEditingEvents;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (void)deleteItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)eventFlow:(id)arg1 didFinishWithEventBuilderItem:(id)arg2;
- (void)eventFlowDidCancel:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setAllowsEditingEvents:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)trailingSwipeActionsForItem:(id)arg1;
- (void)transitionToViewController:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
