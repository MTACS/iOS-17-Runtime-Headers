
@protocol HKOrganDonationConnectionManagerDelegate <NSObject>

@required

- (void)organDonationConnectionManagerDidRemoveCredential:(HKOrganDonationConnectionManager *)arg1;
- (void)organDonationConnectionManagerDidStoreCredential:(HKOrganDonationConnectionManager *)arg1;

@end
