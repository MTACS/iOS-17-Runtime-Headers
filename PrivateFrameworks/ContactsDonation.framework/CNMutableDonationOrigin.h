
@interface CNMutableDonationOrigin : CNDonationOrigin

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *clusterIdentifier;
@property (nonatomic, copy) NSDate *donationDate;
@property (nonatomic, copy) NSString *donationIdentifier;
@property (nonatomic, copy) NSDate *expirationDate;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClusterIdentifier:(id)arg1;
- (void)setDonationDate:(id)arg1;
- (void)setDonationIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;

@end
