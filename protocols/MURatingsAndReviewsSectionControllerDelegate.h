
@protocol MURatingsAndReviewsSectionControllerDelegate <NSObject>

@required

- (void)ratingsAndReviewsSectionController:(MURatingsAndReviewsSectionController *)arg1 didSelectPlaceCollection:(GEOPlaceCollection *)arg2;
- (void)ratingsAndReviewsSectionController:(MURatingsAndReviewsSectionController *)arg1 didSelectViewReview:(id <MKMapItemProviderRatingSnippet>)arg2;
- (void)ratingsAndReviewsSectionControllerDidSelectViewAllReviews:(MURatingsAndReviewsSectionController *)arg1;

@end
