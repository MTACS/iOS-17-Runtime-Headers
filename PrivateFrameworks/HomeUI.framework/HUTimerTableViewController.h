
@interface HUTimerTableViewController : HUMobileTimerObjectTableViewController <HUTimerCreationDelegate, UITableViewDelegate> {
    id  _addNotificationObserver;
    NSTimer * _animationTimer;
    id  _canDispatchNotificationObserver;
    id  _firingNotificationObserver;
    id  _removeNotificationObserver;
    id  _resetNotificationObserver;
    COTimerManager * _timerManager;
    id  _updateNotificationObserver;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (nonatomic, retain) id addNotificationObserver;
@property (nonatomic, retain) NSTimer *animationTimer;
@property (nonatomic, retain) id canDispatchNotificationObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id firingNotificationObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id removeNotificationObserver;
@property (nonatomic, retain) id resetNotificationObserver;
@property (readonly) Class superclass;
@property (nonatomic, retain) COTimerManager *timerManager;
@property (nonatomic, retain) id updateNotificationObserver;

- (void).cxx_destruct;
- (id)_baseMobileTimerObjectsFuture;
- (id)_canManagerControlAccessory;
- (void)_extractUpdatedTimerObjectsFromNotification:(id)arg1;
- (id)_findTimerObjectForID:(id)arg1;
- (id)_newCellForMTTimerObjectUUID:(id)arg1;
- (void)_removeTimerObjectAtIndexPath:(id)arg1;
- (id)addNotificationObserver;
- (id)animationTimer;
- (void)animationTimerTick:(id)arg1;
- (id)canDispatchNotificationObserver;
- (void)dealloc;
- (id)firingNotificationObserver;
- (id)initWithMediaProfileContainer:(id)arg1;
- (void)presentAddMobileTimerObjectViewControllerOnMainThread;
- (id)presentationDelegate;
- (id)removeNotificationObserver;
- (id)resetNotificationObserver;
- (void)setAddNotificationObserver:(id)arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setCanDispatchNotificationObserver:(id)arg1;
- (void)setFiringNotificationObserver:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRemoveNotificationObserver:(id)arg1;
- (void)setResetNotificationObserver:(id)arg1;
- (void)setTimerManager:(id)arg1;
- (void)setUpdateNotificationObserver:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)timerCreationViewController:(id)arg1 didCreateTimer:(id)arg2;
- (id)timerManager;
- (id)updateNotificationObserver;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
