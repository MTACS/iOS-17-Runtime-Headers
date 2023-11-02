
@interface ATXInterruptingNotificationsHelper : NSObject {
    BMAppInFocus * _curenEndEvent;
    BMAppInFocus * _curenStartEvent;
    ATXInterruptingAppSessionEvent * _interruptingAppSessionEvent;
    NSMutableArray * _interruptingAppSessions;
    BMAppInFocus * _potentialInterruptedEndEvent;
    NSMutableArray * _potentialInterruptingAppLaunchEvents;
    BMAppInFocus * _previousEndEvent;
    BMAppInFocus * _previousStartEvent;
    NSMutableDictionary * _recentNotifications;
}

- (void).cxx_destruct;
- (void)checkAppLaunchEndEvent:(id)arg1;
- (void)checkAppLaunchStartEvent:(id)arg1;
- (bool)checkIfStartEventWasTheInterruptedEvent:(id)arg1;
- (void)checkNotificationEvent:(id)arg1;
- (bool)doesCurrentAppLaunchInterruptPreviousAppLaunch:(id)arg1;
- (id)init;
- (id)interruptingAppsessions;
- (void)recordInterruptingAppSession;

@end
