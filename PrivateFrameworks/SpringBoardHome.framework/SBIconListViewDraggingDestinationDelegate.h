
@interface SBIconListViewDraggingDestinationDelegate : NSObject <BSDescriptionProviding, SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate> {
    NSMutableSet * _activeDropSessionIdentifiers;
    unsigned long long  _currentDragType;
    <SBIconListViewDraggingPolicyHandling> * _currentPolicyHandler;
    unsigned long long  _currentSpringLoadedDragType;
    NSMapTable * _dragObservers;
    UIDropInteraction * _dropInteraction;
    NSMutableSet * _dropSessionIdentifiersWaitingForConcludeDrop;
    SBIconListView * _iconListView;
    <SBIconListViewDraggingPolicyHandling> * _springLoadingPolicyHandler;
}

@property (nonatomic) unsigned long long currentDragType;
@property (nonatomic, retain) <SBIconListViewDraggingPolicyHandling> *currentPolicyHandler;
@property (nonatomic) unsigned long long currentSpringLoadedDragType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic, retain) <SBIconListViewDraggingPolicyHandling> *springLoadingPolicyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)_handleSpringloadAndComplete:(id)arg1;
- (void)_resetSpringLoadingPolicyHandler;
- (void)addDragObserver:(id)arg1 forDropSession:(id)arg2;
- (unsigned long long)currentDragType;
- (id)currentPolicyHandler;
- (unsigned long long)currentSpringLoadedDragType;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)dragTypeForDropSession:(id)arg1;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)enumerateDragObserversForDropSession:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)iconListView;
- (id)initWithIconListView:(id)arg1;
- (bool)isDropSessionWaitingForConcludeDrop:(id)arg1;
- (void)markDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (void)removeAllDragObserversForDropSession:(id)arg1;
- (void)setCurrentDragType:(unsigned long long)arg1;
- (void)setCurrentPolicyHandler:(id)arg1;
- (void)setCurrentSpringLoadedDragType:(unsigned long long)arg1;
- (void)setSpringLoadingPolicyHandler:(id)arg1;
- (void)springLoadedInteractionDidFinish;
- (id)springLoadingPolicyHandler;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forDropSession:(id)arg3;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (id)uniqueIdentifierForDropSession:(id)arg1;
- (void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (bool)updateCurrentPolicyHandlerForDropSession:(id)arg1;
- (bool)updateSpringLoadedPolicyHandlerForDropSession:(id)arg1;

@end
