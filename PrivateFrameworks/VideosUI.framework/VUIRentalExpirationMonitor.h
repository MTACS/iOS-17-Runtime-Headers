
@interface VUIRentalExpirationMonitor : NSObject {
    NSDate * _dateOfLastRentalExpirationHandling;
    NSTimer * _earliestExpirationTimer;
    NSObject<OS_dispatch_queue> * _serialQueue;
    TVPStateMachine * _stateMachine;
}

@property (nonatomic, retain) NSDate *dateOfLastRentalExpirationHandling;
@property (nonatomic, retain) NSTimer *earliestExpirationTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) TVPStateMachine *stateMachine;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_expirationTimerDidFire:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_registerStateMachineHandlers;
- (id)dateOfLastRentalExpirationHandling;
- (void)dealloc;
- (id)earliestExpirationTimer;
- (id)init;
- (id)serialQueue;
- (void)setDateOfLastRentalExpirationHandling:(id)arg1;
- (void)setEarliestExpirationTimer:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)startMonitoring;
- (id)stateMachine;

@end
