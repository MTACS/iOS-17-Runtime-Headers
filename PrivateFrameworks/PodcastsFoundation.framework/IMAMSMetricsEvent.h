
@interface IMAMSMetricsEvent : AMSMetricsEvent

@property (nonatomic, retain) NSString *pageType;

- (id)eventType;
- (id)init;
- (id)pageType;
- (void)setEventType:(id)arg1;
- (void)setPageType:(id)arg1;

@end
