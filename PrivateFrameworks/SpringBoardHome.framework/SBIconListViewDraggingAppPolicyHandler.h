
@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling> {
    NSMapTable * _dragContexts;
    SBIconListViewDraggingDestinationDelegate * _draggingDestinationDelegate;
    SBHIconEditingSettings * _iconEditingSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SBIconListViewDraggingDestinationDelegate *draggingDestinationDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHIconEditingSettings *iconEditingSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDragPauseTimerForDropSession:(id)arg1;
- (void)_cancelDragPauseTimers;
- (id)_destinationFolderIconViewForDragItem:(id)arg1 iconIndexPath:(id*)arg2 folderRelativeIconIndexPath:(id*)arg3;
- (void)_dragPauseTimerFired:(id)arg1;
- (id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (id)_iconForDragItem:(id)arg1;
- (id)_iconViewForDragItem:(id)arg1 createIfNecessary:(bool)arg2;
- (void)_resetDragPauseTimerForPoint:(struct CGPoint { double x1; double x2; })arg1 dropSession:(id)arg2;
- (void)_updateDragPauseForDropSession:(id)arg1;
- (bool)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2;
- (unsigned long long)dragHitRegionForDropSession:(id)arg1 iconListView:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 icon:(id)arg4;
- (id)draggingDestinationDelegate;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;
- (id)iconEditingSettings;
- (id)init;
- (void)setDraggingDestinationDelegate:(id)arg1;
- (void)setIconEditingSettings:(id)arg1;

@end
