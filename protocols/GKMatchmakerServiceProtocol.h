
@protocol GKMatchmakerServiceProtocol <GKExtensionProtocol>

@optional

- (void)applicationWillEnterForeground;
- (void)groupActivityJoiningPlayer:(GKPlayerInternal *)arg1 devicePushToken:(NSData *)arg2 participantServerIdentifier:(NSString *)arg3;
- (void)inviterCancelled;
- (void)recipientsPropertiesProvided:(NSDictionary *)arg1;
- (void)setAcceptedInviteInternal:(GKInviteInternal *)arg1;
- (void)setAutomatchFailedWithError:(NSError *)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setCanStartWithMinimumPlayers:(bool)arg1;
- (void)setConnectingStateForPlayer:(GKPlayerInternal *)arg1;
- (void)setDefaultInvitationMessage:(NSString *)arg1;
- (void)setEligibilityForGroupSession:(bool)arg1;
- (void)setExistingPlayers:(NSArray *)arg1;
- (void)setFailedWithError:(NSError *)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInvitesFailedWithError:(NSError *)arg1;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
- (void)setMatchmakingMode:(long long)arg1;
- (void)setNearbyPlayer:(NSString *)arg1 reachable:(bool)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 connected:(bool)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 responded:(long long)arg2;
- (void)setPlayer:(GKPlayerInternal *)arg1 sentData:(NSData *)arg2;
- (void)setSharePlaySharingControllerResult:(bool)arg1;

@end
