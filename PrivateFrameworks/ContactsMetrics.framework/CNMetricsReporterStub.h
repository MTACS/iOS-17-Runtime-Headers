
@interface CNMetricsReporterStub : NSObject <CNMetricsReporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)logSimpleEvent:(id)arg1 forApplication:(id)arg2 andLog:(bool)arg3;
- (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(bool)arg3;

@end
