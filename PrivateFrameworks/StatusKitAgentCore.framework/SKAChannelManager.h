
@interface SKAChannelManager : NSObject <SKAChannelManaging, SKAPushManagingDelegate> {
    <SKAAccountProviding> * _accountProvider;
    <SKAChannelManagingDelegate> * _delegate;
    <SKAPushManaging> * _pushManager;
}

@property (nonatomic, retain) <SKAAccountProviding> *accountProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAChannelManagingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SKAPushManaging> *pushManager;
@property (readonly) Class superclass;

+ (id)_jwtTokenNotFoundError;
+ (id)_serverResponseError;
+ (id)logger;

- (void).cxx_destruct;
- (id)_createPayloadDataFromData:(id)arg1;
- (id)_getNonce;
- (id)_getPresenceJWTToken;
- (id)_getStatusJWTToken;
- (id)accountProvider;
- (void)activePresenceChannelSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)activeStatusChannelSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)assertPresence:(id)arg1 onChannel:(id)arg2 membershipKey:(id)arg3 serverKey:(id)arg4 timestamp:(id)arg5 withChannelToken:(id)arg6 serviceIdentifier:(id)arg7 isRefresh:(bool)arg8 completion:(id /* block */)arg9;
- (void)createChannelWithCompletion:(id /* block */)arg1;
- (void)createPresenceChannelWithMembershipKey:(id)arg1 serverKey:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (id)initWithPushManager:(id)arg1 accountProvider:(id)arg2 delegate:(id)arg3;
- (void)pollActiveParticipantsForChannel:(id)arg1 membershipKey:(id)arg2 serverKey:(id)arg3 withChannelToken:(id)arg4 serviceIdentifier:(id)arg5 completion:(id /* block */)arg6;
- (void)publishData:(id)arg1 onChannel:(id)arg2 withChannelToken:(id)arg3 publishInitiateTime:(id)arg4 isPendingPublish:(bool)arg5 isScheduledPublish:(bool)arg6 retryCount:(unsigned long long)arg7 completion:(id /* block */)arg8;
- (id)pushManager;
- (void)pushManager:(id)arg1 didReceiveData:(id)arg2 onChannel:(id)arg3 dateReceived:(id)arg4 dateExpired:(id)arg5;
- (void)pushManager:(id)arg1 failedToSubscribeToChannel:(id)arg2 withError:(id)arg3;
- (void)releasePresenceOnChannel:(id)arg1 membershipKey:(id)arg2 serverKey:(id)arg3 timestamp:(id)arg4 withChannelToken:(id)arg5 serviceIdentifier:(id)arg6 completion:(id /* block */)arg7;
- (id)serverTime;
- (void)setAccountProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPushManager:(id)arg1;
- (void)subscribeToPresenceChannels:(id)arg1;
- (void)subscribeToStatusChannels:(id)arg1;
- (void)unsubscribeFromPresenceChannels:(id)arg1;
- (void)unsubscribeFromStatusChannels:(id)arg1;

@end
