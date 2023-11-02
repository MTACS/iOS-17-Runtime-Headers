
@interface HMDUserPresenceFeed : HMFObject {
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    HMDUserPresenceRegion * _presenceRegion;
    HMDUserPresenceUpdateReason * _reason;
    HMDUser * _user;
}

@property (nonatomic, readonly) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, readonly) HMUserPresenceCompute *presenceComputeStatus;
@property (nonatomic, readonly) HMDUserPresenceRegion *presenceRegion;
@property (nonatomic, readonly) HMDUserPresenceUpdateReason *reason;
@property (nonatomic, readonly) HMDUser *user;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUser:(id)arg1 presenceAuthStatus:(id)arg2 presenceComputeStatus:(id)arg3 presenceRegion:(id)arg4 reason:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)presenceAuthStatus;
- (id)presenceComputeStatus;
- (id)presenceRegion;
- (id)reason;
- (id)user;

@end
