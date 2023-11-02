
@protocol BCAssetReview <BCCloudData>

@required

- (NSString *)assetReviewID;
- (double)normalizedStarRating;
- (NSString *)reviewBody;
- (NSString *)reviewTitle;
- (short)starRating;

@end
