
@protocol SUUIIPhoneProductPageDelegate <NSObject>

@optional

- (bool)iPhoneProductPage:(SUUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SUUIItem *)arg2;
- (bool)iPhoneProductPage:(SUUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;

@end
