
@interface _ARSessionMetricsDefaultReporter : NSObject <ARSessionMetricsReporting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)postDarwinNotification:(id)arg1;
- (void)sendEvent:(id)arg1 dictionary:(id /* block */)arg2;

@end
