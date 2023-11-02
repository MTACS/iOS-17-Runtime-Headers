
@interface HMDIDSFirewallManager : HMFObject <HMFLogging> {
    HMDIDSFirewallManagerContext * _context;
}

@property (readonly) HMDIDSFirewallManagerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *userIDs;

+ (id)firewallEntriesForUserIDs:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)addFireWallEntryForUserIDs:(id)arg1;
- (id)context;
- (void)handleDidAddHome;
- (void)handleDidAddUserWithUserID:(id)arg1;
- (void)handleDidRemoveHome;
- (void)handleDidRemoveUser;
- (id)initWithContext:(id)arg1;
- (void)replaceFireWallEntriesWithUserIDs:(id)arg1;
- (void)start;
- (id)userIDs;

@end
