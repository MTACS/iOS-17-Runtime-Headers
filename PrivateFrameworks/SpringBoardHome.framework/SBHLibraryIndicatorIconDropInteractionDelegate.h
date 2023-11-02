
@interface SBHLibraryIndicatorIconDropInteractionDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate> {
    <SBHLibraryIndicatorIconDropInteractionContextProviding> * _contextProvider;
    UIDropInteraction * _dropInteraction;
    SBIconView * _libraryIndicatorIconView;
}

@property (nonatomic) <SBHLibraryIndicatorIconDropInteractionContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconView *libraryIndicatorIconView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canPerformDropForAnyItemInSession:(id)arg1;
- (bool)_canPerformDropForDragItem:(id)arg1;
- (bool)_canPerformDropForDraggedIcon:(id)arg1;
- (id)_draggedItemIdentifiersInSession:(id)arg1;
- (void)_handleSpringLoadedInteractionDidActivateWithContext:(id)arg1;
- (id)_iconIdentifierForDragItem:(id)arg1;
- (id)_iconModel;
- (void)_notifyDidPerformDropForSession:(id)arg1;
- (void)_updateIndicatorIconViewForSession:(id)arg1 isActive:(bool)arg2;
- (id)contextProvider;
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
- (id)initWithLibraryIndicatorIconView:(id)arg1;
- (id)libraryIndicatorIconView;
- (void)setContextProvider:(id)arg1;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forDropSession:(id)arg3;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;

@end
