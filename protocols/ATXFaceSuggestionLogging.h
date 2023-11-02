
@protocol ATXFaceSuggestionLogging

@required

- (void)logComplicationGalleryDidAppearWithComplicationSets:(NSArray *)arg1;
- (void)logComplicationGalleryDidDisappear;
- (void)logDidAddComplication:(ATXComplication *)arg1;
- (void)logDidAddComplicationSet:(ATXComplicationSet *)arg1;
- (void)logDidHideFaceGalleryItem:(ATXFaceGalleryItem *)arg1;
- (void)logDidTapComplication:(ATXComplication *)arg1;
- (void)logDidTapComplicationSet:(ATXComplicationSet *)arg1;
- (void)logDidTapFaceGalleryItem:(ATXFaceGalleryItem *)arg1;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(ATXFaceGalleryConfiguration *)arg1;
- (void)logFaceGalleryDidDisappear;
- (void)logFaceGalleryItemsDidAppear:(NSArray *)arg1;

@end
