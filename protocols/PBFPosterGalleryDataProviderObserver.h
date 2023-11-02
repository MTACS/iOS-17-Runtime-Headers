
@protocol PBFPosterGalleryDataProviderObserver <NSObject>

@optional

- (void)dataProviderDidUpdate:(PBFPosterGalleryDataProvider *)arg1;
- (void)dataProviderWillUpdate:(PBFPosterGalleryDataProvider *)arg1;

@end
