
@interface MSPReceiverETAController : NSObject <MSPSharedTripRelayDelegate, MSPSharedTripStorageDelegate> {
    MSPSharedTripBlocklist * _blockedList;
    NSTimer * _cleanupTimer;
    <MSPReceiverETAControllerDelegate> * _delegate;
    MSPSharedTripRelay * _idsRelay;
    MDNotificationCenter * _mapsNotificationCenter;
    NSMutableOrderedSet * _orderedNavStateIdentifiers;
    NSMutableDictionary * _sharedNavStates;
    NSMutableDictionary * _sharedSessions;
    NSObject<OS_os_transaction> * _transaction;
    NSMutableDictionary * _waitingNavStates;
}

@property (nonatomic, readonly) NSArray *allTrips;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPReceiverETAControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (void)_cleanGroup:(id)arg1;
- (bool)_cleanUpNecessaryForGroup:(id)arg1;
- (void)_cleanupIfNecessary;
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(id /* block */)arg3;
- (void)_setNotificationCenter:(id)arg1;
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(bool)arg3;
- (id)allTrips;
- (void)blockSharedTrip:(id)arg1;
- (void)cleanTimer;
- (void)clearBlockedTripIdentifiers;
- (void)dealloc;
- (id)delegate;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSessionEnded:(id)arg1;
- (id)initWithRelay:(id)arg1;
- (void)purgeExpiredBlockedTripIdentifiers;
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;
- (void)relay:(id)arg1 sharingClosed:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;
- (bool)subscribeToUpdatesToSharedTrip:(id)arg1 error:(id*)arg2;
- (bool)unsubscribeFromUpdatesToSharedTrip:(id)arg1 error:(id*)arg2;
- (void)updateContacts;

@end
