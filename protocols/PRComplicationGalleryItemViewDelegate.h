
@protocol PRComplicationGalleryItemViewDelegate <NSObject>

@required

- (void)complicationGalleryItemView:(PRComplicationGalleryItemView *)arg1 didBeginDragInteraction:(UIDragInteraction *)arg2;
- (void)complicationGalleryItemView:(PRComplicationGalleryItemView *)arg1 didEndDragInteraction:(UIDragInteraction *)arg2 withOperation:(unsigned long long)arg3;

@end
