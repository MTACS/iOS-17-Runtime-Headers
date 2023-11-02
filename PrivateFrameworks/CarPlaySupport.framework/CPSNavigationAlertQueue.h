
@interface CPSNavigationAlertQueue : NSObject <CPSApplicationStateObserving, CPSButtonDelegate> {
    NSTimer * _alertTimer;
    CPSApplicationStateMonitor * _applicationStateMonitor;
    CPNavigationAlert * _currentAlert;
    CPSNavigationAlertView * _currentAlertView;
    <CPSNavigationAlertQueueDelegate> * _delegate;
    <CPTemplateDelegate> * _templateDelegate;
}

@property (nonatomic, retain) NSTimer *alertTimer;
@property (nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, readonly) CPNavigationAlert *currentAlert;
@property (nonatomic, readonly) CPSNavigationAlertView *currentAlertView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CPSNavigationAlertQueueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDisplayingAlert;
@property (readonly) Class superclass;
@property (nonatomic) <CPTemplateDelegate> *templateDelegate;

- (void).cxx_destruct;
- (bool)_canBeginAnimatingAlert;
- (void)_clearAlertViewIfNecessaryForDismissedAlertView:(id)arg1;
- (void)_startAlertAnimations;
- (void)_visibleAlertTimerFired:(id)arg1;
- (id)alertTimer;
- (id)applicationStateMonitor;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(bool)arg2;
- (void)beginAnimatingAlertIfPossible;
- (id)currentAlert;
- (id)currentAlertView;
- (id)delegate;
- (void)didSelectButton:(id)arg1;
- (void)dismissCurrentNavigationAlertAnimated:(bool)arg1 context:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2;
- (bool)isDisplayingAlert;
- (void)prepareNavigationAlert:(id)arg1 templateDelegate:(id)arg2 animated:(bool)arg3;
- (void)setAlertTimer:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (id)templateDelegate;

@end
