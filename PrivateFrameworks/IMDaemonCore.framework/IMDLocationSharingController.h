
@interface IMDLocationSharingController : NSObject {
    id  _fmlSession;
    FMFSession * _session;
}

@property (nonatomic, retain) id fmlSession;

+ (void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(bool)arg3 broadcastChanges:(bool)arg4;
+ (void)addLocationShareItemToMatchingChats:(id)arg1;
+ (id)sharedInstance;

- (void)_configureFindMyLocateSession;
- (void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3;
- (void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3;
- (void)_initializeFindMySessionIfInAllowedProcess;
- (void)_postFMLFriendshipChangeForHandleID:(id)arg1 handleType:(long long)arg2 updateType:(long long)arg3 isFromMessages:(bool)arg4;
- (void)_setUpFindMyLocateSessionCallbacks;
- (void)_startFMLSessionMonitoring;
- (void)dealloc;
- (void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (id)fmlSession;
- (id)init;
- (void)receivedIncomingLocationSharePacket:(id)arg1;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 account:(id)arg3;
- (void)setFmlSession:(id)arg1;

@end
