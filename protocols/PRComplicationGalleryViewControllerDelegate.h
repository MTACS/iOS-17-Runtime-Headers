
@protocol PRComplicationGalleryViewControllerDelegate

@required

- (void)complicationGalleryViewController:(PRComplicationGalleryViewController *)arg1 didAddComplication:(PRComplicationDescriptor *)arg2;
- (void)complicationGalleryViewController:(PRComplicationGalleryViewController *)arg1 didBeginDraggingComplication:(PRComplicationDescriptor *)arg2;
- (void)complicationGalleryViewController:(PRComplicationGalleryViewController *)arg1 didEndDraggingComplication:(PRComplicationDescriptor *)arg2 withOperation:(unsigned long long)arg3;
- (void)complicationGalleryViewControllerDidFinish:(PRComplicationGalleryViewController *)arg1;

@end
