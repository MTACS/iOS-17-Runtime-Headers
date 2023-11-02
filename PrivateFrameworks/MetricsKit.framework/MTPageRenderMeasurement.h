
@interface MTPageRenderMeasurement : MTPerfBaseMeasurement <MTPageRenderMeasurementData> {
    NSString * _pageContext;
    NSString * _pageId;
    NSString * _pageType;
}

@property (nonatomic, readonly, copy) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *pageContext;
@property (nonatomic, readonly, copy) NSString *pageContext;
@property (nonatomic, readonly, copy) NSString *pageId;
@property (nonatomic, copy) NSString *pageId;
@property (nonatomic, readonly, copy) NSString *pageType;
@property (nonatomic, copy) NSString *pageType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMeasurementTransformer:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 eventData:(id)arg5;
- (void)mark:(id)arg1;
- (void)mark:(id)arg1 date:(id)arg2;
- (void)mark:(id)arg1 time:(long long)arg2;
- (id)pageContext;
- (id)pageId;
- (id)pageType;
- (void)setAppLaunch:(bool)arg1;
- (void)setLaunchCorrelationKey:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setPageId:(id)arg1;
- (void)setPageType:(id)arg1;
- (void)setPreloadStatus:(id)arg1;
- (void)setPrimaryDataResponseCached:(bool)arg1;
- (void)setXpSamplingForced:(bool)arg1;
- (void)setXpSamplingPercentageUsers:(double)arg1;
- (void)setXpSessionDuration:(unsigned long long)arg1;

@end
