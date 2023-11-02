
@interface HDNotificationSyncClient : NSObject <HDDiagnosticObject, HDNotificationInstructionManagerObserver, HDProfileReadyObserver> {
    NSString * _clientIdentifier;
    <HDNotificationSyncClientDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_messageIdentifiersInFlight;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _unitTest_currentDate;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDNotificationSyncClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDNotificationInstructionManager *instructionManager;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *unitTest_currentDate;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)delegate;
- (id)description;
- (id)diagnosticDescription;
- (void)fakeReceivedNotificationInstruction:(id)arg1 sendingDeviceInfo:(id)arg2 criteria:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 queue:(id)arg3;
- (id)instructionManager;
- (bool)markPendingNotificationInstructionsAsProcessed:(id)arg1 error:(id*)arg2;
- (id)notificationHoldInstructionsWithError:(id*)arg1;
- (void)notificationInstructionManager:(id)arg1 didInsertNotificationInstruction:(id)arg2;
- (bool)obliterateNotificationInstructionsError:(id*)arg1;
- (id)pendingNotificationDismissInstructionsWithError:(id*)arg1;
- (id)pendingNotificationSendInstructionsWithError:(id*)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (bool)sendNewDeviceNotificationWithMessageKind:(long long)arg1 error:(id*)arg2;
- (bool)sendNotificationInstruction:(id)arg1 criteria:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setUnitTest_currentDate:(id)arg1;
- (id)unitTest_currentDate;

@end
