
@interface MUPlaceRatingReviewTitleBuilder : NSObject {
    bool  _supportsGuides;
    bool  _supportsRatings;
    bool  _supportsReviews;
}

@property (nonatomic) bool supportsGuides;
@property (nonatomic) bool supportsRatings;
@property (nonatomic) bool supportsReviews;
@property (nonatomic, readonly) unsigned long long titleType;

- (id)buildTitleString;
- (void)setSupportsGuides:(bool)arg1;
- (void)setSupportsRatings:(bool)arg1;
- (void)setSupportsReviews:(bool)arg1;
- (bool)supportsGuides;
- (bool)supportsRatings;
- (bool)supportsReviews;
- (unsigned long long)titleType;

@end
