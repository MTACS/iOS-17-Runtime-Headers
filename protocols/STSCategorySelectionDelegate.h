
@protocol STSCategorySelectionDelegate <NSObject>

@required

- (void)categoryViewController:(STSSearchDropDownViewController *)arg1 didSelectCategory:(NSString *)arg2 suggested:(bool)arg3;
- (void)categoryViewController:(STSSearchDropDownViewController *)arg1 didSelectRecent:(NSString *)arg2;

@end
