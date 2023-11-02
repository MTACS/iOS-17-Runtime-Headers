
@protocol CNComposeDragSourceDelegate <NSObject>

@required

- (NSArray *)dragSource:(CNComposeDragSource *)arg1 draggableItemsAtPoint:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (long long)dragSource:(CNComposeDragSource *)arg1 dataOwnerForSession:(id <UIDragSession>)arg2;
- (id)dragSource:(CNComposeDragSource *)arg1 localObjectForDraggableItem:(id <NSItemProviderWriting>)arg2;
- (UIView *)dragSource:(CNComposeDragSource *)arg1 previewForDraggableItem:(id <NSItemProviderWriting>)arg2;
- (bool)dragSource:(CNComposeDragSource *)arg1 sessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (bool)dragSource:(CNComposeDragSource *)arg1 sessionIsRestrictedToMail:(id <UIDragSession>)arg2;
- (NSString *)dragSource:(CNComposeDragSource *)arg1 suggestedNameForDraggableItem:(id <NSItemProviderWriting>)arg2;
- (UITargetedDragPreview *)dragSource:(CNComposeDragSource *)arg1 targetedPreviewForDraggableItem:(id <NSItemProviderWriting>)arg2;
- (NSData *)dragSource:(CNComposeDragSource *)arg1 teamDataForDraggableItem:(id <NSItemProviderWriting>)arg2;
- (void)dragSource:(CNComposeDragSource *)arg1 willEndInteractionWithItems:(NSArray *)arg2 dropOperation:(unsigned long long)arg3;

@end
