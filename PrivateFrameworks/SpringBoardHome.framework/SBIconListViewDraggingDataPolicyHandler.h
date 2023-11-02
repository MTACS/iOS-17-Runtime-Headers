
@interface SBIconListViewDraggingDataPolicyHandler : NSObject <LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling> {
    NSMapTable * _sourceURLsByOperationMapTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bestSupportedUTIForDragItem:(id)arg1 supportedTypes:(id)arg2;
- (id)_currentDraggingIconViewInView:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_removeAnySourceURLForOperation:(id)arg1;
- (bool)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2;
- (unsigned long long)dragHitRegionForDropSession:(id)arg1 iconListView:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 icon:(id)arg4;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;
- (id)init;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;

@end
