
@interface PMLTrackerAWDAdapter : NSObject <PMLTrackerAdapterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;

@end
