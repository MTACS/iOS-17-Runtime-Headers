
@interface GEOPlaceQuestionnaire : NSObject {
    bool  _alwaysPositionInitialRatingCtaTowardsTop;
    bool  _canCollectPhotos;
    bool  _canCollectRatings;
    unsigned long long  _maximumNumberOfPhotos;
    NSArray * _ratingCategories;
    GEOPDScorecardLayout * _scorecardLayout;
    NSString * _version;
}

@property (nonatomic, readonly) bool alwaysPositionInitialRatingCtaTowardsTop;
@property (nonatomic, readonly) bool canCollectPhotos;
@property (nonatomic, readonly) bool canCollectRatings;
@property (nonatomic, readonly) bool canShowCallToAction;
@property (nonatomic, readonly) unsigned long long maximumNumberOfPhotos;
@property (nonatomic, readonly) NSArray *ratingCategories;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (bool)alwaysPositionInitialRatingCtaTowardsTop;
- (bool)canCollectPhotos;
- (bool)canCollectRatings;
- (bool)canShowCallToAction;
- (id)initWithGEOPDPlaceQuestionnaire:(id)arg1;
- (unsigned long long)maximumNumberOfPhotos;
- (id)ratingCategories;
- (id)version;

@end
