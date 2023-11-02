
@protocol AMSUIMessageViewController <NSObject>

@required

- (void)enqueueImpressionMetrics;
- (unsigned long long)impressionsReportingFrequency;
- (AMSBinaryPromise *)loadPromise;
- (void)setImpressionsReportingFrequency:(unsigned long long)arg1;
- (void)setLoadPromise:(AMSBinaryPromise *)arg1;
- (void)setShouldAutomaticallyReportMetrics:(bool)arg1;
- (bool)shouldAutomaticallyReportMetrics;

@end
