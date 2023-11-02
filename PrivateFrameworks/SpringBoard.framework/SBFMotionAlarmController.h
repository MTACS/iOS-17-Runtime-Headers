
@interface SBFMotionAlarmController : NSObject <CMMotionAlarmDelegateProtocol> {
    <SBFMotionAlarmDelegate> * _delegate;
    CMMotionAlarmManager * _motionAlarmManager;
    NSMutableArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFMotionAlarmDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CMMotionAlarmManager *motionAlarmManager;
@property (nonatomic, retain) NSMutableArray *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegate;
- (void)_registerMotionAlarm;
- (void)_unregisterMotionAlarm;
- (void)alarmDidFire:(id)arg1 error:(id)arg2;
- (void)alarmDidRegister:(id)arg1 error:(id)arg2;
- (void)alarmDidUnregister:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)motionAlarmManager;
- (id)observers;
- (void)registerMotionAlarm;
- (void)remoteAppLaunchedWithResult:(unsigned int)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMotionAlarmManager:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)unregisterMotionAlarm;

@end
