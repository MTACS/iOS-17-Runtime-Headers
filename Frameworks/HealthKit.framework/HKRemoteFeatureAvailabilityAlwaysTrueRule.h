
@interface HKRemoteFeatureAvailabilityAlwaysTrueRule : NSObject <HKRemoteFeatureAvailabilityRule>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (bool)evaluate;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;

@end
