
@interface FCHeadlineClusteringRules : NSObject {
    double  _autoFavoriteClusterMaxSizeMultiplier;
    double  _autoFavoriteClusterMinSizeMultiplier;
    bool  _enforcePublisherCap;
    unsigned long long  _maxClusterSize;
    unsigned long long  _maxClusterSizeAutoFavorite;
    unsigned long long  _maxEvergreenArticles;
    unsigned long long  _maxIdealClusterSize;
    unsigned long long  _maxIdealClusterSizeAutoFavorite;
    unsigned long long  _maxNativeAdCount;
    unsigned long long  _maxPublisherOccurrences;
    unsigned long long  _maxUnpaidArticles;
    unsigned long long  _minClusterSize;
    unsigned long long  _minClusterSizeAutoFavorite;
    unsigned long long  _minIdealClusterSize;
    unsigned long long  _minIdealClusterSizeAutoFavorite;
    unsigned long long  _thumbnailMinHammingDistance;
    double  _topicDiversityThreshold;
}

@property (nonatomic) double autoFavoriteClusterMaxSizeMultiplier;
@property (nonatomic) double autoFavoriteClusterMinSizeMultiplier;
@property (nonatomic, readonly) bool enforcePublisherCap;
@property (nonatomic, readonly) unsigned long long maxClusterSize;
@property (nonatomic) unsigned long long maxClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long maxEvergreenArticles;
@property (nonatomic, readonly) unsigned long long maxIdealClusterSize;
@property (nonatomic) unsigned long long maxIdealClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long maxNativeAdCount;
@property (nonatomic, readonly) unsigned long long maxPublisherOccurrences;
@property (nonatomic, readonly) unsigned long long maxUnpaidArticles;
@property (nonatomic, readonly) unsigned long long minClusterSize;
@property (nonatomic) unsigned long long minClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long minIdealClusterSize;
@property (nonatomic) unsigned long long minIdealClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long thumbnailMinHammingDistance;
@property (nonatomic, readonly) double topicDiversityThreshold;

+ (id)rulesWithTreatment:(id)arg1 configurationSet:(long long)arg2 deviceIsiPad:(bool)arg3 limitUnpaidArticles:(bool)arg4 enforcePublisherCap:(bool)arg5 minClusterSizeiPhone:(long long)arg6 maxClusterSizeiPhone:(long long)arg7 minClusterSizeiPad:(long long)arg8 maxClusterSizeiPad:(long long)arg9 todayFeedEnabled:(bool)arg10;
+ (id)rulesWithTreatment:(id)arg1 configurationSet:(long long)arg2 deviceIsiPad:(bool)arg3 limitUnpaidArticles:(bool)arg4 enforcePublisherCap:(bool)arg5 todayFeedEnabled:(bool)arg6;
+ (id)rulesWithTreatment:(id)arg1 deviceIsiPad:(bool)arg2 limitUnpaidArticles:(bool)arg3 enforcePublisherCap:(bool)arg4 minClusterSizeiPhone:(long long)arg5 maxClusterSizeiPhone:(long long)arg6 minClusterSizeiPad:(long long)arg7 maxClusterSizeiPad:(long long)arg8 todayFeedEnabled:(bool)arg9;
+ (id)rulesWithTreatment:(id)arg1 deviceIsiPad:(bool)arg2 limitUnpaidArticles:(bool)arg3 enforcePublisherCap:(bool)arg4 todayFeedEnabled:(bool)arg5;

- (double)autoFavoriteClusterMaxSizeMultiplier;
- (double)autoFavoriteClusterMinSizeMultiplier;
- (bool)enforcePublisherCap;
- (id)init;
- (id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 minIdealClusterSize:(unsigned long long)arg3 maxIdealClusterSize:(unsigned long long)arg4 minClusterSizeAutoFavorite:(unsigned long long)arg5 maxClusterSizeAutoFavorite:(unsigned long long)arg6 minIdealClusterSizeAutoFavorite:(unsigned long long)arg7 maxIdealClusterSizeAutoFavorite:(unsigned long long)arg8 maxPublisherOccurrences:(unsigned long long)arg9 enforcePublisherCap:(bool)arg10 maxUnpaidArticles:(unsigned long long)arg11 maxEvergreenArticles:(unsigned long long)arg12 topicDiversityThreshold:(double)arg13 maxNativeAdCount:(unsigned long long)arg14 thumbnailMinHammingDistance:(unsigned long long)arg15;
- (unsigned long long)maxClusterSize;
- (unsigned long long)maxClusterSizeAutoFavorite;
- (unsigned long long)maxEvergreenArticles;
- (unsigned long long)maxIdealClusterSize;
- (unsigned long long)maxIdealClusterSizeAutoFavorite;
- (unsigned long long)maxNativeAdCount;
- (unsigned long long)maxPublisherOccurrences;
- (unsigned long long)maxUnpaidArticles;
- (unsigned long long)minClusterSize;
- (unsigned long long)minClusterSizeAutoFavorite;
- (unsigned long long)minIdealClusterSize;
- (unsigned long long)minIdealClusterSizeAutoFavorite;
- (void)setAutoFavoriteClusterMaxSizeMultiplier:(double)arg1;
- (void)setAutoFavoriteClusterMinSizeMultiplier:(double)arg1;
- (void)setMaxClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setMaxIdealClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setMinClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setMinIdealClusterSizeAutoFavorite:(unsigned long long)arg1;
- (unsigned long long)thumbnailMinHammingDistance;
- (double)topicDiversityThreshold;

@end
