
@protocol SKUIIPhoneProductPageDelegate <NSObject>

@optional

- (bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SKUIItem *)arg2;
- (bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;

@end
