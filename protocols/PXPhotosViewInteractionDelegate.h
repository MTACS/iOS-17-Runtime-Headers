
@protocol PXPhotosViewInteractionDelegate <NSObject>

@required

- (NSObject<PXAnonymousViewController> *)presentingViewControllerForPhotosInteraction:(PXPhotosViewInteraction *)arg1;
- (NSUndoManager *)undoManagerForPhotosInteraction:(PXPhotosViewInteraction *)arg1;

@end
