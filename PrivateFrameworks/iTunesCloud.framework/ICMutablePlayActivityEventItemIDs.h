
@interface ICMutablePlayActivityEventItemIDs : ICPlayActivityEventItemIDs

@property (nonatomic) unsigned long long cloudID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic, copy) NSString *lyricsID;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long radioAdamID;
@property (nonatomic) long long reportingAdamID;
@property (nonatomic) long long subscriptionAdamID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCloudID:(unsigned long long)arg1;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setPurchasedAdamID:(long long)arg1;
- (void)setRadioAdamID:(long long)arg1;
- (void)setReportingAdamID:(long long)arg1;
- (void)setSubscriptionAdamID:(long long)arg1;

@end
