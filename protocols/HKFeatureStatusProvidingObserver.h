
@protocol HKFeatureStatusProvidingObserver <NSObject>

@required

- (void)featureStatusProviding:(id <HKFeatureStatusProviding>)arg1 didUpdateFeatureStatus:(HKFeatureStatus *)arg2;

@end
