
@interface HMDPendingInvitedUserMessagePolicy : HMFMessagePolicy {
    HMDHomeManager * _homeManager;
}

@property (nonatomic, readonly) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeManager;
- (id)init;
- (id)initWithHomeManager:(id)arg1;

@end
