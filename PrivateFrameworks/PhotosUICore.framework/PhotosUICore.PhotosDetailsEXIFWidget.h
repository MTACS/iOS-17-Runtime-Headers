
@interface PhotosUICore.PhotosDetailsEXIFWidget : PhotosUICore.PhotosDetailsWidget

@property (nonatomic, readonly) bool hasLoadedContentData;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;

- (bool)hasLoadedContentData;
- (id)init;
- (void)loadContentData;
- (id)snappableWidgetIdentifier;

@end
