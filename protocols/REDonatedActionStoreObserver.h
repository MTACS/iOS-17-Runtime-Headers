
@protocol REDonatedActionStoreObserver <NSObject>

@required

- (void)donationActionStoreReceivedDonation:(REDonatedAction *)arg1 isNewDonation:(bool)arg2;

@optional

- (void)donationActionStoreDidFinishLoadingData;
- (void)donationActionStoreRemoveAllDonations;
- (void)donationActionStoreRemovedDonation:(NSDictionary *)arg1;
- (void)donationActionStoreRemovedDonationsFor:(NSString *)arg1;
- (void)donationActionStoreWillBeginLoadingData;

@end
