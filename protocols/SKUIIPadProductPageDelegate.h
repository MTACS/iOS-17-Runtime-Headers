
@protocol SKUIIPadProductPageDelegate <NSObject>

@optional

- (void)iPadProductPage:(SKUIIPadProductPageViewController *)arg1 openItem:(SKUIItem *)arg2;
- (void)iPadProductPage:(void *)arg1 openURL:(void *)arg2 viewControllerBlock:(void *)arg3; // needs 3 arg types, found 7: SKUIIPadProductPageViewController *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIViewController *, id /* block */, void*
- (void)iPadProductPageCannotOpen:(SKUIIPadProductPageViewController *)arg1;

@end
