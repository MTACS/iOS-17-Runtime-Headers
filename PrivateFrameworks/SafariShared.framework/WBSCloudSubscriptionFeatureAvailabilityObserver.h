
@interface WBSCloudSubscriptionFeatureAvailabilityObserver : NSObject {
    FeatureChangeObserver * _changeObserverToken;
    NSString * _featureIdentifier;
    CloudFeatureObject * _featureObject;
    bool  _isEligible;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)porcupineAvailabilityObserver;
+ (id)provisionNewHideMyEmailAvailabilityObserver;

- (void).cxx_destruct;
- (bool)_overridenAvailability;
- (void)_requestFeatureEligibilityBlockingQueueUntilResponse:(bool)arg1;
- (void)_requestFeatureObjectBlockingQueueUntilResponse:(bool)arg1;
- (void)dealloc;
- (void)getFeatureAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)getFeatureEligibilityWithCompletionHandler:(id /* block */)arg1;
- (id)initWithFeatureIdentifier:(id)arg1;

@end
