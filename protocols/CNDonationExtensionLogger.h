
@protocol CNDonationExtensionLogger <NSObject>

@required

- (void)couldNotLoadDonorExtensionForIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)couldNotRenewDonation:(CNDonationValue *)arg1 error:(NSError *)arg2;
- (void)didExpireDonation:(CNDonationValue *)arg1 withError:(NSError *)arg2;
- (void)didRedonateValuesWithReason:(unsigned long long)arg1;
- (void)didRenewDonation:(CNDonationValue *)arg1 untilDate:(NSDate *)arg2;
- (void)loadedDonorExtension:(CNDDonorExtension *)arg1 forIdentifier:(NSString *)arg2;
- (void)willRedonateValuesWithReason:(unsigned long long)arg1;
- (void)willRenewDonation:(CNDonationValue *)arg1;

@end
