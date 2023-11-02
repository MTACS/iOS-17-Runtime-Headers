
@interface MSPSharedTripServer : NSObject <MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer, NSXPCListenerDelegate> {
    NSMutableDictionary * _connectionSubscriptionsByTripID;
    NSMutableSet * _connections;
    MSPSharedTripRelay * _idsRelay;
    NSXPCListener * _listener;
    NSMapTable * _peersByConnection;
    MSPReceiverETAController * _receivingController;
    MSPSenderETAController * _sendingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)migrateIfNeeded;

- (void).cxx_destruct;
- (bool)_connectionCanControlReceiving:(id)arg1;
- (bool)_connectionCanControlSharing:(id)arg1;
- (void)_purgeSubscriptionsForConnection:(id)arg1;
- (void)_setNotificationCenter:(id)arg1;
- (id)_subscribedConnectionsForTripID:(id)arg1 createIfNeeded:(bool)arg2;
- (void)blockSharedTrip:(id)arg1;
- (void)checkinWithCompletion:(id /* block */)arg1;
- (void)cleanConnections;
- (void)clearBlockedTripIdentifiers;
- (id)connections;
- (void)createControllers;
- (void)createXPCListener;
- (void)dealloc;
- (void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidClose:(id)arg2;
- (void)fetchActiveHandlesWithCompletion:(id /* block */)arg1;
- (void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id /* block */)arg1;
- (void)fetchSharedTripsWithCompletion:(id /* block */)arg1;
- (void)fetchSharingIdentityWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidateActiveHandlesForSenderController:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)purgeExpiredBlockedTripIdentifiers;
- (void)relay:(id)arg1 accountStatusChanged:(bool)arg2;
- (void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)senderController:(id)arg1 didInvalidateSharedTripWithError:(id)arg2;
- (void)senderController:(id)arg1 didStartSharingWithGroupIdentifier:(id)arg2;
- (void)startSharingTripWithContacts:(id)arg1 completion:(id /* block */)arg2;
- (void)startSharingTripWithMessagesContacts:(id)arg1 completion:(id /* block */)arg2;
- (void)startSharingTripWithMessagesGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingTripWithCompletion:(id /* block */)arg1;
- (void)stopSharingTripWithContacts:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingTripWithMessagesGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
