
@interface HDNotificationInstructionSyncService : NSObject <HDDiagnosticObject, HDIDSServiceDelegate> {
    HDIDSService * _IDSServiceInstance;
    HKAnalyticsEventSubmissionManager * _analyticsEventSubmissionManager;
    <HDHealthDaemon> * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_pendingMessages;
    HKObserverSet<HDNotificationInstructionSyncServiceObserver> * _observers;
    NSDate * _unitTest_currentDate;
    id /* block */  _unitTest_didSendInstructionWithSuccess;
    bool  _unitTest_sendOnEmptyDestinationSet;
}

@property (nonatomic, readonly) HDIDSService *IDSService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *unitTest_currentDate;
@property (nonatomic, copy) id /* block */ unitTest_didSendInstructionWithSuccess;
@property (nonatomic) bool unitTest_sendOnEmptyDestinationSet;

- (void).cxx_destruct;
- (id)IDSService;
- (id)description;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (id)initWithDaemon:(id)arg1 IDSService:(id)arg2 analyticsEventManager:(id)arg3;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (bool)sendNotificationInstructionMessage:(id)arg1 error:(id*)arg2;
- (void)service:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 messageContext:(id)arg4;
- (void)service:(id)arg1 didSendWithSuccess:(bool)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)setUnitTest_currentDate:(id)arg1;
- (void)setUnitTest_didSendInstructionWithSuccess:(id /* block */)arg1;
- (void)setUnitTest_sendOnEmptyDestinationSet:(bool)arg1;
- (id)unitTest_currentDate;
- (id /* block */)unitTest_didSendInstructionWithSuccess;
- (bool)unitTest_sendOnEmptyDestinationSet;
- (void)unregisterObserver:(id)arg1;

@end
