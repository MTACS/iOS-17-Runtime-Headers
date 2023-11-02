
@protocol _UIActivityUserDefaultsViewControllerDelegate <NSObject>

@required

- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didFavoriteActivity:(bool)arg2 withIdentifier:(NSUUID *)arg3 activityCategory:(long long)arg4;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didSelectActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3 disabled:(bool)arg4;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didToggleActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didUpdateFavoritesProxies:(NSArray *)arg2 activityCategory:(long long)arg3;

@end
