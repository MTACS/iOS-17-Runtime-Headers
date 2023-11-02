
@protocol SUUIProductPageChildViewControllerDelegate <NSObject>

@required

- (void)productPageChildOpenItem:(SUUIItem *)arg1;
- (void)productPageChildOpenURL:(void *)arg1 viewControllerBlock:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIViewController *, id /* block */, void*
- (void)productPageChildViewControllerDidLoad:(id <SUUIProductPageChildViewController>)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id <SUUIProductPageChildViewController>)arg1;
- (void)productPageChildViewControllerDidScroll:(id <SUUIProductPageChildViewController>)arg1;
- (struct CGPoint { double x1; double x2; })topContentOffset;

@end
