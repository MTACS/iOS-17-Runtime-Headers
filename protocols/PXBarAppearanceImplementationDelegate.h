
@protocol PXBarAppearanceImplementationDelegate <NSObject>

@optional

- (void)barAppearance:(PXBarAppearance *)arg1 willUpdateBarAppearanceOnViewWillAppear:(bool)arg2;
- (bool)barAppearanceIsStatusBarVisible:(PXBarAppearance *)arg1;

@end
