
@protocol REDonatedActionFilteredCacheDelegate <NSObject>

@required

- (void)donatedActionFilteredCacheCountDidChange;
- (void)donatedActionFilteredCacheDidAddDonation:(REDonatedAction *)arg1;
- (void)donatedActionFilteredCacheDonationRemoved;

@end
