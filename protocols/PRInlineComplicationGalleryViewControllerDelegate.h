
@protocol PRInlineComplicationGalleryViewControllerDelegate

@required

- (void)inlineComplicationGalleryViewController:(PRInlineComplicationGalleryViewController *)arg1 didSelectComplication:(PRComplicationDescriptor *)arg2;
- (void)inlineComplicationGalleryViewController:(PRInlineComplicationGalleryViewController *)arg1 didToggleAlternateDate:(bool)arg2;
- (void)inlineComplicationGalleryViewControllerDidFinish:(PRInlineComplicationGalleryViewController *)arg1;

@end
