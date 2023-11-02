
@protocol SKADatabaseManaging <NSObject>

@required

- (NSArray *)allExistingChannelsForHandle:(SKHandle *)arg1 statusTypeIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (NSArray *)allExistingChannelsForStatusTypeIdentifier:(NSString *)arg1 includingPersonalChannel:(bool)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (NSArray *)allPersistentSubscriptionAssertionChannelIdentifiersWithDatabaseContext:(NSManagedObjectContext *)arg1;
- (NSArray *)allPublishedLocalStatusDevicesInDatabaseContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;
- (NSArray *)allPublishedLocalStatusesInDatabaseContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;
- (NSArray *)allSubscribedLocalStatusesInDatabaseContext:(NSManagedObjectContext *)arg1 error:(id*)arg2;
- (void)cleanupDecommisionedChannelsWithDatabaseContext:(NSManagedObjectContext *)arg1;
- (void)cleanupOldChannelsForHandle:(SKHandle *)arg1 statusTypeIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (void)cleanupOldReceivedInvitationsForChannelIdentifier:(NSString *)arg1 excludingInvitation:(SKADatabaseReceivedInvitation *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (void)cleanupOldStatusUpdatesForChannelIdentifier:(NSString *)arg1 excludingStatusUniqueIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (bool)copyInvitedUsersFromChannel:(SKADatabaseChannel *)arg1 toChannel:(SKADatabaseChannel *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseChannel *)createChannelForStatusTypeIdentifier:(NSString *)arg1 channelIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKAGeneratedEncryptionKey *)createGeneratedEncryptionKeyWithOriginalOutgoingRatchetState:(NSData *)arg1 personalChannel:(SKADatabaseChannel *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseInvitedUser *)createInvitedUserWithHandle:(SKHandle *)arg1 senderHandle:(SKHandle *)arg2 invitationPayload:(SKInvitationPayload *)arg3 channel:(SKADatabaseChannel *)arg4 databaseContext:(NSManagedObjectContext *)arg5;
- (bool)createOrUpdateOrDeleteSubscribedLocalStatus:(SKADatabaseSubscribedLocalStatus *)arg1 databaseContext:(NSManagedObjectContext *)arg2 error:(id*)arg3;
- (bool)createOrUpdatePublishedLocalStatusDevices:(NSArray *)arg1 databaseContext:(NSManagedObjectContext *)arg2 error:(id*)arg3;
- (bool)createOrUpdatePublishedLocalStatuses:(NSArray *)arg1 databaseContext:(NSManagedObjectContext *)arg2 error:(id*)arg3;
- (SKADatabaseSubscriptionAssertion *)createOrUpdateTransientSubscriptionHistoryForChannelIdentifier:(NSString *)arg1 lastSubscriptionDate:(NSDate *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabasePendingPublishRequest *)createPendingPublishRequestWithUniqueIdentifier:(NSString *)arg1 dateCreated:(NSDate *)arg2 payloadData:(NSData *)arg3 statusTypeIdentifier:(NSString *)arg4 databaseContext:(NSManagedObjectContext *)arg5;
- (SKADatabaseChannel *)createPersonalChannelForStatusTypeIdentifier:(NSString *)arg1 channelIdentifier:(NSString *)arg2 channelToken:(NSData *)arg3 databaseContext:(NSManagedObjectContext *)arg4;
- (SKADatabaseChannel *)createPresenceChannelForPresenceIdentifier:(NSString *)arg1 channelIdentifier:(NSString *)arg2 channelToken:(NSData *)arg3 peerKey:(NSData *)arg4 serverKey:(NSData *)arg5 membershipKey:(NSData *)arg6 creationDate:(NSDate *)arg7 options:(SKPresenceOptions *)arg8 databaseContext:(NSManagedObjectContext *)arg9;
- (SKADatabaseReceivedInvitation *)createReceivedInvitationForChannel:(SKADatabaseChannel *)arg1 senderHandle:(SKHandle *)arg2 invitedHandle:(SKHandle *)arg3 invitationIdentifier:(NSString *)arg4 dateInvitationCreated:(NSDate *)arg5 incomingRatchetState:(NSData *)arg6 presenceIdentifier:(NSString *)arg7 channelToken:(NSData *)arg8 serverKey:(NSData *)arg9 peerKey:(NSData *)arg10 invitationPayload:(NSData *)arg11 databaseContext:(NSManagedObjectContext *)arg12;
- (SKADatabaseRemovedUser *)createRemovedUserWithHandle:(SKHandle *)arg1 dateRemoved:(NSDate *)arg2 presenceIdentifier:(NSString *)arg3 databaseContext:(NSManagedObjectContext *)arg4;
- (SKADatabaseRemovedUser *)createRemovedUserWithHandle:(SKHandle *)arg1 dateRemoved:(NSDate *)arg2 statusTypeIdentifier:(NSString *)arg3 databaseContext:(NSManagedObjectContext *)arg4;
- (SKADatabaseStatus *)createStatusWithUniqueIdentifier:(NSString *)arg1 dateCreated:(NSDate *)arg2 datePublished:(NSDate *)arg3 dateReceived:(NSDate *)arg4 dateExpired:(NSDate *)arg5 rawData:(NSData *)arg6 channelIdentifier:(NSString *)arg7 databaseContext:(NSManagedObjectContext *)arg8;
- (SKADatabaseSubscriptionAssertion *)createSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 applicationIdentifier:(NSString *)arg2 statusTypeIdentifier:(NSString *)arg3 databaseContext:(NSManagedObjectContext *)arg4;
- (unsigned long long)currentCheckpointForChannel:(SKADatabaseChannel *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)decomissionAllPersonalChannelsWithStatusTypeIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)decomissionChannelWithIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)deleteAllInvitedUsersForPersonalChannel:(SKADatabaseChannel *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)deleteInvitedUserForHandle:(SKHandle *)arg1 personalChannel:(SKADatabaseChannel *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (bool)deleteInvitedUserForHandle:(SKHandle *)arg1 presenceChannel:(SKADatabaseChannel *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (bool)deletePendingPublishRequestWithWithUniqueIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)deletePersonalChannelForStatusTypeIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)deletePublishedLocalStatusDevices:(NSArray *)arg1 databaseContext:(NSManagedObjectContext *)arg2 error:(id*)arg3;
- (bool)deleteRemovedUserWithHandle:(SKHandle *)arg1 presenceIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (bool)deleteRemovedUserWithHandle:(SKHandle *)arg1 statusTypeIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (bool)deleteSubscriptionAssertionWithSubscriptionIdentifier:(NSString *)arg1 applicationIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (SKADatabaseChannel *)existingChannelForHandle:(SKHandle *)arg1 statusTypeIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseChannel *)existingChannelForPresenceIdentifier:(NSString *)arg1 isPersonal:(bool)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseChannel *)existingChannelForSubscriptionIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (NSArray *)existingInvitedUsersForInvitedHandle:(SKHandle *)arg1 onChannel:(SKADatabaseChannel *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (NSArray *)existingInvitedUsersForPersonalChannel:(SKADatabaseChannel *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (SKADatabasePendingPublishRequest *)existingPendingPublishRequestForUniqueIdentifier:(NSString *)arg1 withDatabaseContext:(NSManagedObjectContext *)arg2;
- (NSArray *)existingPendingPublishRequestsForStatusTypeIdentifier:(NSString *)arg1 withDatabaseContext:(NSManagedObjectContext *)arg2;
- (NSArray *)existingPendingPublishRequestsWithDatabaseContext:(NSManagedObjectContext *)arg1;
- (SKADatabaseChannel *)existingPersonalChannelForStatusTypeIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (NSArray *)existingRecentTransientSubscriptionHistoriesWithLimit:(long long)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (SKADatabaseRemovedUser *)existingRemovedUserWithHandle:(SKHandle *)arg1 presenceIdentifier:(NSString *)arg2 withDatabaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseRemovedUser *)existingRemovedUserWithHandle:(SKHandle *)arg1 statusTypeIdentifier:(NSString *)arg2 withDatabaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseStatus *)existingStatusForChannel:(SKADatabaseChannel *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (SKADatabaseStatus *)existingStatusForUniqueIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (SKADatabaseSubscriptionAssertion *)existingSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 applicationIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (NSArray *)existingSubscriptionAssertionsForStatusTypeIdentifier:(NSString *)arg1 applicationIdentifier:(NSString *)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (NSArray *)generatedEncryptionKeysForPersonalChannel:(SKADatabaseChannel *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)incrementPendingPublishRequestRetryCountWithUniqueIdentifier:(NSString *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (NSManagedObjectContext *)newBackgroundContext;
- (NSArray *)receivedInvitationsForChannel:(SKADatabaseChannel *)arg1 databaseContext:(NSManagedObjectContext *)arg2;
- (bool)setCurrentCheckpointForChannel:(SKADatabaseChannel *)arg1 checkpoint:(unsigned long long)arg2 databaseContext:(NSManagedObjectContext *)arg3;
- (SKADatabaseInvitedUser *)updateInvitationPayload:(SKInvitationPayload *)arg1 onExistingInvitedUser:(SKADatabaseInvitedUser *)arg2 channel:(SKADatabaseChannel *)arg3 databaseContext:(NSManagedObjectContext *)arg4;
- (SKADatabaseChannel *)updatePersonalChannel:(SKADatabaseChannel *)arg1 withCurrentOutgoingRatchetState:(NSData *)arg2 databaseContext:(NSManagedObjectContext *)arg3;

@end
