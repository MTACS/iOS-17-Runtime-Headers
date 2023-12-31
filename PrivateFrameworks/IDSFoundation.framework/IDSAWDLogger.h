
@interface IDSAWDLogger : NSObject <CUTMetricLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logger;

- (void)logMetric:(id)arg1;

@end
