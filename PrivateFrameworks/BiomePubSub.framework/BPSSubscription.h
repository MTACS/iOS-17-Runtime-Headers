
@interface BPSSubscription : NSObject <BPSSubscription, BPSUpstreamSubscriptions>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *upstreamSubscriptions;

- (void)cancel;
- (void)requestDemand:(long long)arg1;
- (id)upstreamSubscriptions;

@end
