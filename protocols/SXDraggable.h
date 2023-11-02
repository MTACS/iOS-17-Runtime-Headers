
@protocol SXDraggable

@required

- (void)didEndDragging;
- (void)didStartDragging;
- (NSString *)dragIdentifier;
- (<NSItemProviderWriting> *)dragObject;
- (UIView *)dragPreviewView;
- (NSString *)stringForAXDragAction;

@end
