
@interface HDHealthAppDaemonExtension : NSObject <HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler, HDProfileExtension, HDProfileManagerObserver, HDProfileReadyObserver, HDSharedSummaryManagerObserver, HDSummarySharingEntryObserver, IDSServiceDelegate> {
    HDDaemon * _daemon;
    _HKDelayedOperation * _delayedOperation;
    NSSet * _observedProfileIdentifiers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSObject<OS_dispatch_queue> * _queue;
    HDHealthAppRestorableAlarmManager * _restorableAlarmManager;
    HDHealthAppSharingReminderRestorableAlarm * _sharableReminderAlarm;
    id /* block */  _unitTest_profileReadyObserverDidFinish;
}

@property (nonatomic, retain) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _HKDelayedOperation *delayedOperation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *observedProfileIdentifiers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } observerLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HDHealthAppRestorableAlarmManager *restorableAlarmManager;
@property (nonatomic, retain) HDHealthAppSharingReminderRestorableAlarm *sharableReminderAlarm;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_profileReadyObserverDidFinish;

- (void).cxx_destruct;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)delayedOperation;
- (id)initWithDaemon:(id)arg1;
- (id)initWithDaemon:(id)arg1 queue:(id)arg2;
- (id)observedProfileIdentifiers;
- (struct os_unfair_lock_s { unsigned int x1; })observerLock;
- (void)performPostInstallUpdateTaskForManager:(id)arg1 completion:(id /* block */)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)profileListDidChange;
- (id)queue;
- (void)resetProfileObservers;
- (id)restorableAlarmManager;
- (void)setDaemon:(id)arg1;
- (void)setDelayedOperation:(id)arg1;
- (void)setObservedProfileIdentifiers:(id)arg1;
- (void)setObserverLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setQueue:(id)arg1;
- (void)setRestorableAlarmManager:(id)arg1;
- (void)setSharableReminderAlarm:(id)arg1;
- (void)setUnitTest_profileReadyObserverDidFinish:(id /* block */)arg1;
- (id)sharableReminderAlarm;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)arg1;
- (void)sharingEntriesDidUpdate:(id)arg1;
- (id /* block */)unitTest_profileReadyObserverDidFinish;
- (void)updateSharingReminderScheduledAlarm;

@end
