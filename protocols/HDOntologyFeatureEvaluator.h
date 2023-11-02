
@protocol HDOntologyFeatureEvaluator <NSObject>

@required

- (bool)canRequireShardWithError:(id*)arg1;
- (NSString *)featureIdentifier;
- (void)registerRequiredObserversForProfile:(HDProfile *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (long long)requiresFeatureShardForProfile:(HDProfile *)arg1;

@optional

+ (double)minimumTimeToLive;

@end
