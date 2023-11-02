
@interface _SBHLibraryPodIconView : SBIconView

+ (bool)supportsCursorInteraction;
+ (bool)supportsDragInteraction;
+ (bool)supportsPreviewInteraction;
+ (bool)supportsTapGesture;

- (id)createNewIconLabelViewFactory;

@end
