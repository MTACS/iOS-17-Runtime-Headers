
@protocol SUUIIPadProductPageDelegate <NSObject>

@optional

- (void)iPadProductPage:(SUUIIPadProductPageViewController *)arg1 openItem:(SUUIItem *)arg2;
- (void)iPadProductPage:(void *)arg1 openURL:(void *)arg2 viewControllerBlock:(void *)arg3; // needs 3 arg types, found 7: SUUIIPadProductPageViewController *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIViewController *, id /* block */, void*
- (void)iPadProductPageCannotOpen:(SUUIIPadProductPageViewController *)arg1;

@end
