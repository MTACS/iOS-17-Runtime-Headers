
@interface HMDHomePresence : HMFObject <HMDHomePresenceCheck, HMFLogging> {
    HMDHome * _home;
    HMDDevice * _lastUpdateByDevice;
    NSDictionary * _userPresenceMap;
}

@property (nonatomic, readonly) NSArray *authorizedUsers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPresenceRegionForAllUsers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) HMDDevice *lastUpdateByDevice;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *userPresenceMap;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)areUsersAtHome:(id)arg1;
- (bool)areUsersNotAtHome:(id)arg1;
- (id)attributeDescriptions;
- (id)authorizedUsers;
- (bool)hasPresenceRegionForAllUsers;
- (unsigned long long)hash;
- (id)home;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;
- (bool)isAnyUserAtHome;
- (bool)isEqual:(id)arg1;
- (bool)isNoUserAtHome;
- (bool)isPresenceRegionKnownForUser:(id)arg1;
- (bool)isUserAtHome:(id)arg1;
- (bool)isUserNotAtHome:(id)arg1;
- (id)lastUpdateByDevice;
- (id)logIdentifier;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;
- (id)userPresenceMap;

@end
