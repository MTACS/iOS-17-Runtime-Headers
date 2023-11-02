
@interface HMDHomeMetricsDispatcherFactory : HMFObject <HMDHomeMetricsDispatcherFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createHomeMetricsDispatcherWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;

@end
