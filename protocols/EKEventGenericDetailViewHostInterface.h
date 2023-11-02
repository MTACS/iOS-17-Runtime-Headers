
@protocol EKEventGenericDetailViewHostInterface

@required

- (void)didChangeNavigationBarButtonsWithLeftBarButtonIDs:(NSArray *)arg1 rightBarButtonIDs:(NSArray *)arg2;
- (void)requestDismissViewWithName:(NSString *)arg1 presentationStyle:(long long)arg2;
- (void)requestPresentViewWithName:(NSString *)arg1 viewID:(NSString *)arg2 presentationStyle:(long long)arg3;

@end
