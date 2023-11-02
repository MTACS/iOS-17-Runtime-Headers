
@protocol SBIconDragPreview

@required

- (id /* block */)cleanUpHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SBIconDragPreview> *, void*, id, SEL
- (<BSInvalidatable> *)delayCleanUpForReason:(NSString *)arg1;
- (unsigned long long)dragState;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)dropDestinationAnimationCompleted;
- (SBIcon *)icon;
- (bool)iconAllowsAccessory;
- (bool)iconAllowsLabelArea;
- (bool)iconCanShowCloseBox;
- (double)iconContentScale;
- (bool)iconIsEditing;
- (bool)isFlocked;
- (void)setCleanUpHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBIconDragPreview> *, void*
- (void)setDragState:(unsigned long long)arg1;
- (void)setFlocked:(bool)arg1;
- (void)setIcon:(SBIcon *)arg1;
- (void)setIconAllowsAccessory:(bool)arg1;
- (void)setIconAllowsLabelArea:(bool)arg1;
- (void)setIconCanShowCloseBox:(bool)arg1;
- (void)setIconContentScale:(double)arg1;
- (void)setIconIsEditing:(bool)arg1;
- (void)setIconIsEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIconViewDelegate:(id <SBIconViewDelegate>)arg1;
- (void)updateDestinationIconLocation:(NSString *)arg1 allowsLabelArea:(bool)arg2 animated:(bool)arg3;

@end
