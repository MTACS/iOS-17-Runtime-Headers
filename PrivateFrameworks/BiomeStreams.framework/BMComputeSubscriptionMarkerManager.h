
@interface BMComputeSubscriptionMarkerManager : NSObject {
    NSCountedSet * _activelySubscribedStreams;
    unsigned long long  _domain;
    BMComputeXPCPublisherStorage * _systemStorage;
    BMComputeXPCPublisherStorage * _userStorage;
}

@property (nonatomic, readonly) NSCountedSet *activelySubscribedStreams;
@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *systemStorage;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *userStorage;

- (void).cxx_destruct;
- (id)_subscriptionMarkerStorageForDomain:(unsigned long long)arg1;
- (id)activelySubscribedStreams;
- (void)addSubscriptionWithStreamIdentifier:(id)arg1;
- (unsigned long long)domain;
- (id)initWithUserStorage:(id)arg1 systemStorage:(id)arg2 domain:(unsigned long long)arg3;
- (void)removeSubscriptionWithStreamIdentifier:(id)arg1;
- (id)systemStorage;
- (id)userStorage;

@end
