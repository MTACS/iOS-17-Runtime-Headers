
@interface HMDAudioAnalysisBulletinNotificationManager : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    HMDAppleAccountManager * _accountManager;
    HMDNotificationConditionEvaluator * _evaluator;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSNotificationCenter * _notificationCenter;
    HMFTimer * _synchronizeWithPrimaryDebounceTimer;
    id /* block */  _synchronizeWithPrimaryDebounceTimerFactory;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)registrationsForSource:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_cleanupMultipleRegistrationsAndReplaceWithRegistration:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleAudioAnalysisEventResidentToPrimaryMessage:(id)arg1;
- (id)_mkfLocalAnalysisSignificantEventRegistrationsWithManagedObjectContext:(id)arg1;
- (void)_notifyDevice:(id)arg1 event:(id)arg2 user:(id)arg3;
- (id)_remoteAudioAnalysisRegistrationsForUUID:(id)arg1;
- (void)_requestSynchronizeRegistrations;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (void)_updateNotificationRegistration:(id)arg1 enabled:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg1 disabledRegistrations:(id)arg2;
- (id)accountManager;
- (void)cleanupMultipleRegistrationsAndReplaceWithRegistration:(id)arg1 completion:(id /* block */)arg2;
- (void)configure;
- (id)evaluator;
- (void)handleAudioAnalysisEvent:(id)arg1;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 accountManager:(id)arg4 evaluator:(id)arg5 notificationCenter:(id)arg6;
- (id)localRegistrationForAccessory:(id)arg1 enabled:(bool*)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (bool)multipleLocalRegistrationsForAccessory:(id)arg1;
- (id)notificationCenter;
- (id)registrations;
- (void)setSynchronizeWithPrimaryDebounceTimer:(id)arg1;
- (void)setSynchronizeWithPrimaryDebounceTimerFactory:(id /* block */)arg1;
- (id)source;
- (void)synchronizeLocalRegistrationsWithPrimaryResident;
- (id)synchronizeWithPrimaryDebounceTimer;
- (id /* block */)synchronizeWithPrimaryDebounceTimerFactory;
- (void)timerDidFire:(id)arg1;
- (void)updateNotificationRegistration:(id)arg1 enabled:(bool)arg2 completion:(id /* block */)arg3;
- (id)userDevicesToNotify:(id)arg1 withEvent:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
