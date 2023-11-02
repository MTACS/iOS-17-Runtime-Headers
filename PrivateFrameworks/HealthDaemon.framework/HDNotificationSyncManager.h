
@interface HDNotificationSyncManager : NSObject <HDHealthDaemonReadyObserver, HDNotificationInstructionSyncServiceObserver> {
    HDNotificationInstructionManager * _notificationInstructionManager;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDNotificationInstructionManager *notificationInstructionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)notificationInstructionManager;
- (void)notificationInstructionSyncService:(id)arg1 didReceiveNotificationInstruction:(id)arg2;
- (bool)sendNotificationInstructionMessage:(id)arg1 error:(id*)arg2;

@end
