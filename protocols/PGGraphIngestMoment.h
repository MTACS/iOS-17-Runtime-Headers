
@protocol PGGraphIngestMoment <NSObject>

@required

- (double)behavioralScore;
- (bool)containsBetterScoringAsset;
- (bool)containsNonJunkAssets;
- (double)contentScore;
- (NSString *)encodedCLIPFeatureVector;
- (double)facesProcessedRatio;
- (bool)happensAtSensitiveLocation;
- (bool)hasAssetsWithInterestingScenes;
- (bool)hasHigherThanImprovedAssets;
- (double)inhabitationScore;
- (bool)isInteresting;
- (bool)isInterestingWithAlternateJunking;
- (bool)isSmartInteresting;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (unsigned long long)numberOfAssetsInExtendedCuration;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfItemsWithPersons;
- (unsigned long long)numberOfRegularGemItems;
- (unsigned long long)numberOfShinyGemItems;
- (double)scenesProcessedRatio;
- (unsigned short)sharingComposition;
- (unsigned long long)totalNumberOfPersons;
- (NSDate *)universalEndDate;
- (NSDate *)universalStartDate;
- (NSString *)uuid;

@end
