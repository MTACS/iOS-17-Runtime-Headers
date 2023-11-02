
@protocol CNAvatarCardActionsViewDelegate <NSObject>

@required

- (UIViewController *)viewControllerForCardActionsView:(CNAvatarCardActionsView *)arg1;

@optional

- (void)cardActionsView:(CNAvatarCardActionsView *)arg1 didShowActions:(NSArray *)arg2;
- (NSArray *)cardActionsView:(CNAvatarCardActionsView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (void)dismissViewControllerForCardActionsView:(CNAvatarCardActionsView *)arg1 animated:(bool)arg2;

@end