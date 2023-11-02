
@interface HUAlarmTableViewController : HUMobileTimerObjectTableViewController <HUAlarmEditViewControllerDelegate, HUAlarmTableViewCellDelegate, UITableViewDelegate> {
    id  _addNotificationObserver;
    COAlarmManager * _alarmManager;
    id  _canDispatchNotificationObserver;
    id  _removeNotificationObserver;
    id  _resetNotificationObserver;
    id  _updateNotificationObserver;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (nonatomic, retain) id addNotificationObserver;
@property (nonatomic, retain) COAlarmManager *alarmManager;
@property (nonatomic, retain) id canDispatchNotificationObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id removeNotificationObserver;
@property (nonatomic, retain) id resetNotificationObserver;
@property (readonly) Class superclass;
@property (nonatomic, retain) id updateNotificationObserver;

- (void).cxx_destruct;
- (id)_baseMobileTimerObjectsFuture;
- (id)_canManagerControlAccessory;
- (void)_extractUpdatedTimerObjectsFromNotification:(id)arg1;
- (id)_fakeMobileAlarmObjectsFuture;
- (id)_findTimerObjectForID:(id)arg1;
- (id)_newCellForMTTimerObjectUUID:(id)arg1;
- (void)_removeTimerObjectAtIndexPath:(id)arg1;
- (id)addNotificationObserver;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (void)alarmEditControllerGettingDismissed:(id)arg1;
- (id)alarmManager;
- (id)canDispatchNotificationObserver;
- (void)dealloc;
- (id)editViewControllerForAlarm:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (void)presentAddMobileTimerObjectViewControllerOnMainThread;
- (id)presentationDelegate;
- (id)removeNotificationObserver;
- (id)resetNotificationObserver;
- (void)setAddNotificationObserver:(id)arg1;
- (void)setAlarmEnabled:(bool)arg1 forCell:(id)arg2;
- (void)setAlarmManager:(id)arg1;
- (void)setCanDispatchNotificationObserver:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRemoveNotificationObserver:(id)arg1;
- (void)setResetNotificationObserver:(id)arg1;
- (void)setUpdateNotificationObserver:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)updateNotificationObserver;
- (void)viewDidLoad;

@end
