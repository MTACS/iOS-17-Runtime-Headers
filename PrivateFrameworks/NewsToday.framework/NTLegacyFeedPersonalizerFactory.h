
@interface NTLegacyFeedPersonalizerFactory : NSObject <FCFeedPersonalizerFactoryType>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)newFeedPersonalizerWithAggregateStore:(id)arg1 appConfigurationManager:(id)arg2 todayPrivateData:(id)arg3;

@end
