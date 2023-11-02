
@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic, readonly) NSArray *addPhotoURLs;
@property (nonatomic, readonly) bool canAddPhotosLocally;
@property (nonatomic, readonly) bool canShowPhotosLocally;
@property (nonatomic, readonly) bool requiresAttributionInPhotoViewerHeader;
@property (nonatomic, readonly) bool shouldSuppressPhotoAttribution;
@property (nonatomic, readonly) bool supportsReportingIssue;

- (id)addPhotoURLs;
- (bool)canAddPhotosLocally;
- (bool)canShowPhotosLocally;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (bool)requiresAttributionInPhotoViewerHeader;
- (bool)shouldSuppressPhotoAttribution;
- (bool)supportsReportingIssue;
- (id)urlsForPhotoWithIdentifier:(id)arg1;

@end
