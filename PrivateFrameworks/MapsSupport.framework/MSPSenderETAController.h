
@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSenderMessageStrategyDelegate, MSPSharedTripGroupSessionDelegate> {
    NSObject<MSPSenderETAControllerDelegate> * _delegate;
    NSMutableSet * _destinations;
    MSPSharedTripGroupSession * _groupSession;
    MSPSharedTripRelay * _idsRelay;
    MSPSenderLiveStrategy * _liveSender;
    MSPSenderMessageStrategy * _messageSender;
    MSPSenderMinimalStrategy * _minimalSender;
    MSPNavigationListener * _navigationListener;
    MSPGroupSessionStorage * _sessionStorage;
    MSPSharedTripStorageController * _storageController;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSArray *activeHandles;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanObjects;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)arg1;
- (void)_invalidateActiveHandles;
- (void)_invalidateSharedTripWithError:(id)arg1;
- (void)_restoreLastSession;
- (void)_sendFinishedToIdentifiers:(id)arg1;
- (void)_startNavigationListener;
- (void)_startingGroupSession;
- (void)_stopNavigationListener;
- (void)_updateStorage;
- (bool)_validateNavigationState:(id*)arg1;
- (id)activeHandles;
- (void)dealloc;
- (id)delegate;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSessionEnded:(id)arg1 withError:(id)arg2;
- (id)initWithRelay:(id)arg1;
- (void)navigationListenerArrived:(id)arg1;
- (void)navigationListenerETAUpdated:(id)arg1;
- (void)navigationListenerIsReady:(id)arg1;
- (void)navigationListenerResumed:(id)arg1;
- (void)navigationListenerRouteUpdated:(id)arg1;
- (void)navigationListenerStopped:(id)arg1;
- (void)navigationListenerTrafficUpdated:(id)arg1;
- (void)navigationListenerWaypointsUpdated:(id)arg1;
- (id)rulesForParticipant:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)startSharingWith:(id)arg1 error:(id*)arg2;
- (bool)startSharingWithGroup:(id)arg1 error:(id*)arg2;
- (bool)startSharingWithMessages:(id)arg1 error:(id*)arg2;
- (void)stopSharing:(id*)arg1;
- (void)stopSharingWith:(id)arg1 error:(id*)arg2;
- (void)stopSharingWithGroup:(id)arg1 error:(id*)arg2;
- (void)touchedRules;

@end
