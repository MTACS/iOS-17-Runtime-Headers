
@interface _DBAnalyticsScreenInfo : _DBAnalyticsTimeAccumulator {
    NSString * _analyticsPrefix;
    bool  _hasTransitionControlsWithinViewAreas;
    unsigned long long  _indexOfLargestViewArea;
    CARScreenInfo * _screenInfo;
    CARScreenViewArea * _sessionStartViewArea;
    unsigned long long  _viewAreaChangeCount;
    unsigned long long  _viewAreaChangeUsingTransitionControlCount;
}

@property (nonatomic, readonly, copy) NSString *analyticsPrefix;
@property (nonatomic, readonly) NSDictionary *analytics_sessionEndedDictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *analytics_sessionStartedDictionaryRepresentation;
@property (nonatomic) bool hasTransitionControlsWithinViewAreas;
@property (nonatomic, readonly) unsigned long long indexOfLargestViewArea;
@property (nonatomic, readonly) CARScreenInfo *screenInfo;
@property (nonatomic, readonly) CARScreenViewArea *sessionStartViewArea;
@property (nonatomic) unsigned long long viewAreaChangeCount;
@property (nonatomic) unsigned long long viewAreaChangeUsingTransitionControlCount;

- (void).cxx_destruct;
- (id)_identifierForViewArea:(id)arg1;
- (id)analyticsPrefix;
- (id)analytics_sessionEndedDictionaryRepresentation;
- (id)analytics_sessionStartedDictionaryRepresentation;
- (bool)hasTransitionControlsWithinViewAreas;
- (unsigned long long)indexOfLargestViewArea;
- (id)initWithScreenInfo:(id)arg1 analyticsPrefix:(id)arg2 sessionStartViewArea:(id)arg3;
- (id)screenInfo;
- (id)sessionStartViewArea;
- (void)setHasTransitionControlsWithinViewAreas:(bool)arg1;
- (void)setViewAreaChangeCount:(unsigned long long)arg1;
- (void)setViewAreaChangeUsingTransitionControlCount:(unsigned long long)arg1;
- (void)startCountingTimeForViewArea:(id)arg1;
- (unsigned long long)viewAreaChangeCount;
- (unsigned long long)viewAreaChangeUsingTransitionControlCount;

@end
