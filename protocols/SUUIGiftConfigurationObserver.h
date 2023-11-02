
@protocol SUUIGiftConfigurationObserver <NSObject>

@optional

- (void)giftConfigurationController:(SUUIGiftConfiguration *)arg1 didLoadImageForTheme:(SUUIGiftTheme *)arg2;
- (void)giftConfigurationController:(SUUIGiftConfiguration *)arg1 didLoadLogoForCharity:(SUUIGiftCharity *)arg2;

@end
