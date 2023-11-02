
@interface AMSPageRenderMetricsEvent : AMSMetricsEvent

@property (nonatomic, retain) NSNumber *pageAppearTime;
@property (nonatomic, retain) NSNumber *pageEndTime;
@property (nonatomic, retain) NSString *pageId;
@property (nonatomic, retain) NSNumber *pageInterruptTime;
@property (nonatomic, retain) NSNumber *pageReappearTime;
@property (nonatomic, retain) NSNumber *pageRequestTime;
@property (nonatomic, retain) NSString *pageType;
@property (nonatomic, retain) NSString *pageUrl;
@property (nonatomic, retain) NSNumber *pageUserInteractiveTime;
@property (nonatomic, retain) NSString *placement;
@property (nonatomic, retain) NSNumber *resourceRequestEndTime;
@property (nonatomic, retain) NSNumber *resourceRequestStartTime;

- (id)init;
- (id)pageAppearTime;
- (id)pageEndTime;
- (id)pageId;
- (id)pageInterruptTime;
- (id)pageReappearTime;
- (id)pageRequestTime;
- (id)pageType;
- (id)pageUrl;
- (id)pageUserInteractiveTime;
- (id)placement;
- (id)resourceRequestEndTime;
- (id)resourceRequestStartTime;
- (void)setPageAppearTime:(id)arg1;
- (void)setPageEndTime:(id)arg1;
- (void)setPageId:(id)arg1;
- (void)setPageInterruptTime:(id)arg1;
- (void)setPageReappearTime:(id)arg1;
- (void)setPageRequestTime:(id)arg1;
- (void)setPageType:(id)arg1;
- (void)setPageUrl:(id)arg1;
- (void)setPageUserInteractiveTime:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setResourceRequestEndTime:(id)arg1;
- (void)setResourceRequestStartTime:(id)arg1;

@end
