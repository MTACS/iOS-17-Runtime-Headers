
@interface _MultiplatformDonationRecencyInfo : NSObject {
    NSString * _localBundleIdentifier;
    NSDate * _localDonationCreationDate;
    NSString * _remoteBundleIdentifier;
    NSDate * _remoteDonationCreationDate;
}

@property (nonatomic, copy) NSString *localBundleIdentifier;
@property (nonatomic, retain) NSDate *localDonationCreationDate;
@property (nonatomic, copy) NSString *remoteBundleIdentifier;
@property (nonatomic, retain) NSDate *remoteDonationCreationDate;

- (void).cxx_destruct;
- (id)identifierForMostRecentData;
- (id)localBundleIdentifier;
- (id)localDonationCreationDate;
- (id)remoteBundleIdentifier;
- (id)remoteDonationCreationDate;
- (void)setLocalBundleIdentifier:(id)arg1;
- (void)setLocalDonationCreationDate:(id)arg1;
- (void)setRemoteBundleIdentifier:(id)arg1;
- (void)setRemoteDonationCreationDate:(id)arg1;

@end
