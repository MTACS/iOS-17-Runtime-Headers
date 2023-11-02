
@interface MLReporter : NSObject <CUTMetricLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reporter;

- (void)logMetric:(id)arg1;

@end
