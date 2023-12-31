
@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {
    void _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    void numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;

@end
