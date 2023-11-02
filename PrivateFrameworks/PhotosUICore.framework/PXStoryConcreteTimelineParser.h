
@interface PXStoryConcreteTimelineParser : NSObject {
    PXStoryMutableConcreteTimeline * _accumulatedBestTimeline;
    NSIndexSet * _allowedTransitionKinds;
    PXStoryMutableConcreteTimeline * _candidateAccumulatedTimelineWithNextBestTimeline;
    PXStoryMutableConcreteTimeline * _nextBestTimeline;
    long long  _parseCountLimit;
    double  _parseTimeLimit;
    long long  _preferredInitialDisplayAssetResourceIndex;
    <PFRandomNumberGenerator> * _randomNumberGenerator;
    PXStoryResourcesDataSource * _resourcesDataSource;
    PXStoryConcreteSubtimelineScanner * _scanner;
}

@property (nonatomic, readonly) NSIndexSet *allowedTransitionKinds;
@property (nonatomic, readonly) bool isAtEnd;
@property (nonatomic) long long parseCountLimit;
@property (nonatomic) double parseTimeLimit;
@property (nonatomic) long long preferredInitialDisplayAssetResourceIndex;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;
@property (nonatomic, readonly) PXStoryConcreteSubtimelineScanner *scanner;

- (void).cxx_destruct;
- (void)_adjustTimeline:(id)arg1 andAppendTimeline:(id)arg2;
- (id)allowedTransitionKinds;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isAtEnd;
- (long long)parseCountLimit;
- (id)parseNextBestTimeline;
- (double)parseTimeLimit;
- (long long)preferredInitialDisplayAssetResourceIndex;
- (id)resourcesDataSource;
- (id)scanner;
- (void)setParseCountLimit:(long long)arg1;
- (void)setParseTimeLimit:(double)arg1;
- (void)setPreferredInitialDisplayAssetResourceIndex:(long long)arg1;

@end
