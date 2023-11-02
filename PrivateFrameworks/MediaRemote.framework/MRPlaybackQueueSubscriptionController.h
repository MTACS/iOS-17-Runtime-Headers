
@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding> {
    MSVMutableBidirectionalDictionary * _offsets;
    MRPlayerPath * _playerPath;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _requestFilters;
    NSMutableSet * _requests;
}

@property (nonatomic, readonly) MRPlayerPath *playerPath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(id /* block */)arg2;
- (id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1;
- (bool)hasRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (void)invalidate;
- (id)offsetForIdentifier:(id)arg1;
- (id)playerPath;
- (void)removeRequest:(id)arg1;
- (id)requestForSubscribedContentItemIdentifier:(id)arg1;
- (void)restoreStateFromController:(id)arg1;
- (void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2;

@end
