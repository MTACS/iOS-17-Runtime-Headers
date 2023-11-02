
@protocol SKUIGiftConfigurationObserver <NSObject>

@optional

- (void)giftConfigurationController:(SKUIGiftConfiguration *)arg1 didLoadImageForTheme:(SKUIGiftTheme *)arg2;
- (void)giftConfigurationController:(SKUIGiftConfiguration *)arg1 didLoadLogoForCharity:(SKUIGiftCharity *)arg2;

@end
