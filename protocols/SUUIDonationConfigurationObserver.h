
@protocol SUUIDonationConfigurationObserver <NSObject>

@optional

- (void)donationConfigurationController:(SUUIDonationConfiguration *)arg1 didLoadLogoForCharity:(SUUIGiftCharity *)arg2;

@end
