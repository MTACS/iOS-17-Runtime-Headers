
@protocol HKRemoteFeatureAvailabilityRule <NSObject>

@required

+ (NSString *)ruleIdentifier;

- (bool)evaluate;
- (id)initWithRawValue:(NSDictionary *)arg1 dataSource:(id <HKRemoteFeatureAvailabilityDataSource>)arg2;

@end
