
@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HFItemSectionAccessoryButtonHeaderDelegate> {
    NSArray * _alarmTableViewConstraints;
    HUAlarmTableViewController * _alarmTableViewController;
    NSLayoutConstraint * _heightConstraint;
    HUOLDAlarmTableViewController * _oldAlarmTableViewController;
}

@property (nonatomic, retain) NSArray *alarmTableViewConstraints;
@property (nonatomic, retain) HUAlarmTableViewController *alarmTableViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) HUOLDAlarmTableViewController *oldAlarmTableViewController;
@property (readonly) Class superclass;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_addAlarmControlView;
- (bool)_canShowWhileLocked;
- (void)_updateConstraints;
- (id)alarmTableViewConstraints;
- (id)alarmTableViewController;
- (id)controlItem;
- (id)createDetailsViewController;
- (id)heightConstraint;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 controlOrientation:(unsigned long long)arg4 preferredControl:(unsigned long long)arg5;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isAccessoryControllable;
- (void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2;
- (id)mediaProfileContainer;
- (id)oldAlarmTableViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setAlarmTableViewConstraints:(id)arg1;
- (void)setAlarmTableViewController:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setOldAlarmTableViewController:(id)arg1;
- (bool)shouldShowContentForReachabilityState:(bool)arg1;
- (void)viewDidLoad;

@end
