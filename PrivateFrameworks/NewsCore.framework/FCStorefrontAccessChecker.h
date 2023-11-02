
@interface FCStorefrontAccessChecker : FCAccessChecker {
    FCPrivateChannelMembershipController * _privateChannelMembershipController;
}

@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (void).cxx_destruct;
- (bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithPrivateChannelMembershipController:(id)arg1;
- (id)privateChannelMembershipController;

@end
