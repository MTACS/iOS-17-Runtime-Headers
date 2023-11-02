
@interface ATXUserMetricsLoggerTargetPET : NSObject <ATXUserMetricsLoggerTarget>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)logMessage:(id)arg1;

@end
