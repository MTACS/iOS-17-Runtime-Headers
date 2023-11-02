
@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck> {
    NSDictionary * _userPresenceMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *userPresenceMap;

- (void).cxx_destruct;
- (bool)areUsersAtHome:(id)arg1;
- (bool)areUsersNotAtHome:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPresenceByPairingIdentity:(id)arg1;
- (id)initWithPresenceByUserId:(id)arg1;
- (bool)isAnyUserAtHome;
- (bool)isEqual:(id)arg1;
- (bool)isNoUserAtHome;
- (bool)isUserAtHome:(id)arg1;
- (bool)isUserNotAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (id)userPresenceMap;

@end
