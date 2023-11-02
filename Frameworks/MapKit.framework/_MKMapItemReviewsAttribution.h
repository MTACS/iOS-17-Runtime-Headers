
@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {
    GEOMapItemReviewsAttribution * _geoReviewsAttribution;
}

@property (nonatomic, readonly) NSArray *addReviewURLs;

- (void).cxx_destruct;
- (id)addReviewURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;
- (id)urlsForReview:(id)arg1;
- (id)urlsForSelectedItemWithItems:(id)arg1;

@end
