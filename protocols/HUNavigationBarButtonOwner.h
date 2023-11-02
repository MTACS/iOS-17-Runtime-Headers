
@protocol HUNavigationBarButtonOwner <NSObject>

@required

- (HMHome *)homeForNavigationBarButton:(HUNavigationBarButton *)arg1;
- (HMRoom *)roomForNavigationBarButton:(HUNavigationBarButton *)arg1;

@optional

- (<HUAddActionDelegate> *)addActionDelegateForNavigationBarButton:(HUNavigationBarButton *)arg1;
- (<HUEditActionDelegate> *)editActionDelegateForNavigationBarButton:(HUNavigationBarButton *)arg1;
- (<HUNavigationActionDelegate> *)navigationActionDelegateForNavigationBarButton:(HUNavigationBarButton *)arg1;
- (bool)shouldIncludeRoomsInHomeMenu;
- (NSArray *)statusItemsForNavigationBarButton:(HUNavigationBarButton *)arg1 inHome:(HMHome *)arg2;

@end
