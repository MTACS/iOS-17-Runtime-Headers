
@protocol PXWidgetCompositionElementObserver <NSObject>

@required

- (void)elementHasLoadedContentDataDidChange:(PXWidgetCompositionElement *)arg1;
- (void)elementNeedsLayout:(PXWidgetCompositionElement *)arg1 preferredAnimationOptions:(PXBasicTileAnimationOptions *)arg2 originatingTilingController:(PXTilingController *)arg3;

@end
