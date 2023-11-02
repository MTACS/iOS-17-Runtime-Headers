
@interface GEOAppleRating : NSObject <MURatingPercentageViewModel> {
    GEOPDRating * _pdRating;
}

@property (nonatomic, readonly) NSString *categoryTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayPercentage;
@property (nonatomic, readonly) bool hasPercentage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRecommended;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) double maxScore;
@property (nonatomic, readonly) unsigned long long numberOfRatingsUsedForScore;
@property (nonatomic, readonly) int numberOfRatingsUsedForScore;
@property (nonatomic, readonly) double percentage;
@property (nonatomic, readonly) long long ratingType;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (id)initWithRating:(id)arg1;
- (bool)isRecommended;
- (id)localizedTitle;
- (double)maxScore;
- (int)numberOfRatingsUsedForScore;
- (double)percentage;
- (long long)ratingType;
- (double)score;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)categoryTitle;
- (unsigned long long)displayPercentage;
- (bool)hasPercentage;
- (bool)hasSubtitle;

@end
