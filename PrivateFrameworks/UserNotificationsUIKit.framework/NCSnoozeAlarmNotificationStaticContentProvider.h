
@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider <NCNotificationViewControllerObserving, _UIAlwaysOnEnvironmentObserver> {
    double  _fireTime;
    NSTimer * _tickTimer;
    NCNotificationViewController * _viewController;
    NSString * secondaryText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fireTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *secondaryText;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *tickTimer;
@property (nonatomic, retain) NCNotificationViewController *viewController;

- (void).cxx_destruct;
- (void)_beginObservingAlwaysOnEnvironment;
- (id)_formatDuration:(double)arg1 includeSeconds:(bool)arg2;
- (bool)_hasOneMinuteOrLessRemainingForTime:(double)arg1;
- (double)_remainingDurationForTime:(double)arg1;
- (id)_secondaryTextForTime:(double)arg1;
- (void)_tickTimerFired:(id)arg1;
- (id)_timelinesForDateInterval:(id)arg1;
- (void)_timelinesForDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateContentForTime:(double)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (id)date;
- (void)dealloc;
- (double)fireTime;
- (id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2;
- (void)invalidateTimer;
- (void)notificationViewControllerViewDidMoveToWindow:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (id)secondaryText;
- (void)setFireTime:(double)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTickTimer:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)tickTimer;
- (id)title;
- (id)viewController;

@end
