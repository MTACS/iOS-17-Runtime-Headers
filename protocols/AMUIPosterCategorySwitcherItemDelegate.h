
@protocol AMUIPosterCategorySwitcherItemDelegate <NSObject>

@required

- (void)posterCategorySwitcherItem:(AMUIPosterCategorySwitcherItem *)arg1 didRequestInlineAuthenticationWithUnlockDestination:(NSString *)arg2;
- (void)posterCategorySwitcherItem:(AMUIPosterCategorySwitcherItem *)arg1 relinquishInstanceIdentifier:(NSUUID *)arg2;
- (void)posterCategorySwitcherItem:(AMUIPosterCategorySwitcherItem *)arg1 setChromeVisibility:(bool)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 animationFence:(BKSAnimationFenceHandle *)arg4;
- (bool)posterCategorySwitcherItemHasInlineAuthenticated:(AMUIPosterCategorySwitcherItem *)arg1;
- (bool)posterCategorySwitcherItemIsAuthenticated:(AMUIPosterCategorySwitcherItem *)arg1;
- (AMUIPosterSwitcherSettings *)posterCategorySwitcherItemPrototypeSettings:(AMUIPosterCategorySwitcherItem *)arg1;
- (NSUUID *)posterCategorySwitcherItemRequestInstanceIdentifier:(AMUIPosterCategorySwitcherItem *)arg1 preferring:(NSUUID *)arg2;

@end
