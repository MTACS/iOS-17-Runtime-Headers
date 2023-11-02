
@protocol TPSAnalyticsProcessorDataSource

@required

- (NSArray *)allContextualInfo;
- (NSArray *)allTipStatus;
- (TPSContextualEvent *)contextualEventForIdentifier:(NSString *)arg1;
- (TPSContextualInfo *)contextualInfoForIdentifier:(NSString *)arg1;
- (TPSExperiment *)experiment;

@end
