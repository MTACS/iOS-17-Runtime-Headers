
@interface HUQuickControlTimerDetailsViewController : HUQuickControlViewController <HFItemSectionAccessoryButtonHeaderDelegate> {
    NSLayoutConstraint * _heightConstraint;
    NSArray * _timerTableViewConstraints;
    HUTimerTableViewController * _timerTableViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timerTableViewConstraints;
@property (nonatomic, retain) HUTimerTableViewController *timerTableViewController;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_addTimerControlView;
- (bool)_canShowWhileLocked;
- (void)_updateConstraints;
- (id)controlItem;
- (id)createDetailsViewController;
- (id)heightConstraint;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 controlOrientation:(unsigned long long)arg4 preferredControl:(unsigned long long)arg5;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isAccessoryControllable;
- (void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2;
- (id)mediaProfileContainer;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setTimerTableViewConstraints:(id)arg1;
- (void)setTimerTableViewController:(id)arg1;
- (bool)shouldShowContentForReachabilityState:(bool)arg1;
- (id)timerTableViewConstraints;
- (id)timerTableViewController;
- (void)viewDidLoad;

@end
