
@interface HMDCoreAnalyticsLogEventFactory : NSObject <HMFLogging, HMMCoreAnalyticsLogEventFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)logEventForTaggedEvent:(id)arg1;
- (id)supportedTags;

@end
