
@interface PSUICellularPlanDetailController : PSListController {
    PSUISubscriptionContextMenusGroup * _subscriptionContextMenus;
}

@property (nonatomic, retain) PSUISubscriptionContextMenusGroup *subscriptionContextMenus;

- (void).cxx_destruct;
- (id)getLogger;
- (void)setSubscriptionContextMenus:(id)arg1;
- (id)specifiers;
- (id)subscriptionContextMenus;
- (void)viewWillAppear:(bool)arg1;

@end
