
@protocol FCNetworkReachabilityRequirement <NSObject>

@required

- (bool)isSatisfied;
- (<FCNetworkReachabilityRequirementObserving> *)observer;
- (long long)offlineReason;
- (void)setObserver:(id <FCNetworkReachabilityRequirementObserving>)arg1;

@end
