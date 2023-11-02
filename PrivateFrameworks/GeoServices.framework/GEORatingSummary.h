
@interface GEORatingSummary : NSObject {
    NSMapTable * _attributionMap;
    GEOPDRatingData * _ratingData;
}

@property (getter=isAppleRating, nonatomic, readonly) bool appleRating;
@property (nonatomic, readonly) float normalizedUserRatingScore;
@property (nonatomic, readonly) float sampleSizeUsedForScore;
@property (nonatomic, readonly) NSString *vendorName;

- (void).cxx_destruct;
- (float)_normalizedFirstPartyUserRatingScore;
- (float)_normalizedThirdPartyUserRatingScore;
- (id)initWithRatingData:(id)arg1 attributionMap:(id)arg2;
- (bool)isAppleRating;
- (float)normalizedUserRatingScore;
- (float)sampleSizeUsedForScore;
- (id)vendorName;

@end
