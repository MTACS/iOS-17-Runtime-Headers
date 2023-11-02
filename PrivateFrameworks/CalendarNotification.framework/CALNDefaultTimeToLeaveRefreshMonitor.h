
@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CADModule, CALNTimeToLeaveRefreshMonitor> {
    bool  _active;
    <CALNTimeToLeaveRefreshMonitorDelegate> * _delegate;
    bool  _registeredForAlarms;
    <CALNTimeToLeaveRefreshStorage> * _storage;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNTimeToLeaveRefreshMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRegisteredForAlarms, nonatomic) bool registeredForAlarms;
@property (nonatomic, readonly) <CALNTimeToLeaveRefreshStorage> *storage;
@property (readonly) Class superclass;

+ (id)_refreshTimerAlarmNameForEventExternalURL:(id)arg1;

- (void).cxx_destruct;
- (void)_refreshTimerFiredForEventExternalURL:(id)arg1;
- (void)activate;
- (void)deactivate;
- (id)delegate;
- (void)didRegisterForAlarms;
- (id)initWithStorage:(id)arg1;
- (bool)isActive;
- (bool)isRegisteredForAlarms;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredForAlarms:(bool)arg1;
- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;
- (id)storage;

@end
