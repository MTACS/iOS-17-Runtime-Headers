
@interface CRLanguageResourcesStack : NSObject {
    NSMutableSet * _activeSubscribers;
    NSMutableArray * _availableResources;
    NSString * _localeIdentifier;
    NSObject<OS_dispatch_semaphore> * _resourceCountSemaphore;
    long long  _resourceType;
    NSMutableSet * _subscribers;
    long long  _totalResources;
}

@property (retain) NSMutableSet *activeSubscribers;
@property (retain) NSMutableArray *availableResources;
@property (retain) NSString *localeIdentifier;
@property (retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore;
@property long long resourceType;
@property (retain) NSMutableSet *subscribers;
@property long long totalResources;

- (void).cxx_destruct;
- (id)activeSubscribers;
- (void)addSubscriber:(id)arg1;
- (id)availableResources;
- (void)deactivateSubscriber:(id)arg1;
- (bool)hasSubscriber:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 resourceType:(long long)arg2;
- (id)localeIdentifier;
- (id)popResourceForSubscriber:(id)arg1;
- (void)pushResource:(id)arg1;
- (void)removeSubscriber:(id)arg1;
- (id)resourceCountSemaphore;
- (long long)resourceType;
- (void)setActiveSubscribers:(id)arg1;
- (void)setAvailableResources:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setResourceCountSemaphore:(id)arg1;
- (void)setResourceType:(long long)arg1;
- (void)setSubscribers:(id)arg1;
- (void)setTotalResources:(long long)arg1;
- (long long)subscriberCount;
- (id)subscribers;
- (long long)totalResources;

@end
