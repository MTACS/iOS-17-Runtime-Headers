
@interface CNShareLocationController : NSObject {
    <CNCancelable> * _bestPropertyCancelable;
    CNFuture * _bestPropertyFuture;
    CNContact * _contact;
    _TtC10ContactsUI19FindMyLocateSession * _findMyLocateSession;
    NSSet * _handles;
    CNUIIDSAvailabilityProvider * _idsAvailabilityProvider;
    <CNSchedulerProvider> * _schedulerProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<CNShareLocationProtocol> * _shareLocationDelegate;
}

@property (nonatomic, retain) <CNCancelable> *bestPropertyCancelable;
@property (nonatomic, retain) CNFuture *bestPropertyFuture;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) _TtC10ContactsUI19FindMyLocateSession *findMyLocateSession;
@property (nonatomic, retain) NSSet *handles;
@property (nonatomic, readonly) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) NSObject<CNShareLocationProtocol> *shareLocationDelegate;

+ (bool)findMyFunctionalityAvailable;
+ (id)fmlHandleFromContactProperty:(id)arg1;
+ (id)fmlHandlesFromContact:(id)arg1;

- (void).cxx_destruct;
- (void)actionsMenuProviderWithCompletion:(id /* block */)arg1;
- (id)bestPropertyCancelable;
- (id)bestPropertyFuture;
- (void)canShareWithCompletion:(id /* block */)arg1;
- (id)contact;
- (id)endOfDayDate;
- (id)findMyLocateSession;
- (void)friendshipStateWithCompletion:(id /* block */)arg1;
- (id)handles;
- (id)idsAvailabilityProvider;
- (id)initWithIDSAvailabilityProvider:(id)arg1;
- (id)initWithIDSAvailabilityProvider:(id)arg1 fmlSession:(id)arg2 schedulerProvider:(id)arg3;
- (void)initiateIDSRequest;
- (void)isSharingWithCompletion:(id /* block */)arg1;
- (void)notifySharingStatusDidChange;
- (void)perform:(id)arg1;
- (id)schedulerProvider;
- (id)serialQueue;
- (void)setBestPropertyCancelable:(id)arg1;
- (void)setBestPropertyFuture:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setFindMyLocateSession:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setShareLocationDelegate:(id)arg1;
- (id)shareLocationDelegate;
- (void)shareLocationWithExpiration:(long long)arg1;
- (void)startUpdatingFriends;
- (void)stopSharingLocation;
- (void)stopUpdatingFriends;

@end
