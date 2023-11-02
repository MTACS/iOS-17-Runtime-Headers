
@protocol SKProductPageViewControllerDelegate <NSObject>

@optional

- (void)productPage:(SKProductPageViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)productPage:(SKProductPageViewController *)arg1 didFinishPurchase:(SSPurchase *)arg2 withError:(NSError *)arg3;
- (void)productPage:(SKProductPageViewController *)arg1 didFinishWithResult:(long long)arg2;
- (void)productPage:(SKProductPageViewController *)arg1 didReceiveTitle:(NSString *)arg2;
- (void)productPage:(SKProductPageViewController *)arg1 presentProductPage:(SKProductPageViewController *)arg2 animated:(bool)arg3;
- (void)productPage:(SKProductPageViewController *)arg1 purchaseBatchFailedWithError:(NSError *)arg2;
- (void)productPage:(SKProductPageViewController *)arg1 willMakePurchases:(NSArray *)arg2;
- (void)productPageDidFinishLoad:(SKProductPageViewController *)arg1;

@end
