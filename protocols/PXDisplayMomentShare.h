
@protocol PXDisplayMomentShare <PXDisplayAssetCollection, PXMediaTypeAggregating>

@required

- (unsigned long long)assetCount;
- (NSDate *)endDate;
- (NSDate *)expiryDate;
- (NSString *)localizedTitle;
- (unsigned long long)photosCount;
- (long long)px_momentShareType;
- (NSURL *)shareURL;
- (NSDate *)startDate;
- (unsigned short)status;
- (unsigned long long)uploadedPhotosCount;
- (unsigned long long)uploadedVideosCount;
- (unsigned long long)videosCount;

@end
