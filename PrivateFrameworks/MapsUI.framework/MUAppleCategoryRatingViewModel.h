
@interface MUAppleCategoryRatingViewModel : NSObject <MURatingPercentageViewModel> {
    GEOAppleRating * _appleRating;
    long long  _countAdjustment;
}

@property (nonatomic, readonly) NSString *categoryTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayPercentage;
@property (nonatomic, readonly) bool hasPercentage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxScore;
@property (nonatomic, readonly) unsigned long long numberOfRatingsUsedForScore;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)categoryTitle;
- (unsigned long long)displayPercentage;
- (bool)hasPercentage;
- (bool)hasSubtitle;
- (unsigned long long)hash;
- (id)initWithAppleRating:(id)arg1 clientCountAdjustment:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (double)maxScore;
- (unsigned long long)numberOfRatingsUsedForScore;
- (double)score;

@end
