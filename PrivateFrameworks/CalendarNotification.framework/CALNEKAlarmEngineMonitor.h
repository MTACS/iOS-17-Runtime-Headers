
@interface CALNEKAlarmEngineMonitor : NSObject <CADModule, CALNAlarmEngineMonitor> {
    bool  _active;
    _EKAlarmEngine * _alarmEngine;
    NSNotificationCenter * _notificationCenter;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) _EKAlarmEngine *alarmEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2;
- (id)alarmEngine;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (id)initWithAlarmEngine:(id)arg1 notificationCenter:(id)arg2;
- (bool)isActive;
- (id)notificationCenter;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeAlarmsFiredObserver:(id)arg1;
- (void)setActive:(bool)arg1;

@end
