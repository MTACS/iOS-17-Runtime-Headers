
@protocol SKAChannelManaging <NSObject>

@required

- (void)activePresenceChannelSubscriptionsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)activeStatusChannelSubscriptionsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)assertPresence:(void *)arg1 onChannel:(void *)arg2 membershipKey:(void *)arg3 serverKey:(void *)arg4 timestamp:(void *)arg5 withChannelToken:(void *)arg6 serviceIdentifier:(void *)arg7 isRefresh:(void *)arg8 completion:(void *)arg9; // needs 9 arg types, found 17: NSData *, NSString *, SKAPresenceMembershipKey *, SKAPresenceEncryptionKey *, NSDate *, NSData *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, double, unsigned long long, NSArray *, void*
- (void)createChannelWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSError *, void*
- (void)createPresenceChannelWithMembershipKey:(void *)arg1 serverKey:(void *)arg2 serviceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: SKAPresenceMembershipKey *, SKAPresenceEncryptionKey *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSError *, void*
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (void)pollActiveParticipantsForChannel:(void *)arg1 membershipKey:(void *)arg2 serverKey:(void *)arg3 withChannelToken:(void *)arg4 serviceIdentifier:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 13: NSString *, SKAPresenceMembershipKey *, SKAPresenceEncryptionKey *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned long long, NSArray *, void*
- (void)publishData:(void *)arg1 onChannel:(void *)arg2 withChannelToken:(void *)arg3 publishInitiateTime:(void *)arg4 isPendingPublish:(void *)arg5 isScheduledPublish:(void *)arg6 retryCount:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 13: NSData *, NSString *, NSData *, NSDate *, bool, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releasePresenceOnChannel:(void *)arg1 membershipKey:(void *)arg2 serverKey:(void *)arg3 timestamp:(void *)arg4 withChannelToken:(void *)arg5 serviceIdentifier:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSString *, SKAPresenceMembershipKey *, SKAPresenceEncryptionKey *, NSDate *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDate *)serverTime;
- (void)subscribeToPresenceChannels:(NSArray *)arg1;
- (void)subscribeToStatusChannels:(NSArray *)arg1;
- (void)unsubscribeFromPresenceChannels:(NSArray *)arg1;
- (void)unsubscribeFromStatusChannels:(NSArray *)arg1;

@end
