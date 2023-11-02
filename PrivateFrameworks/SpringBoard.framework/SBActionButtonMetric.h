
@interface SBActionButtonMetric : NSObject <SBFAnalyticsBackendEventHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;

@end
