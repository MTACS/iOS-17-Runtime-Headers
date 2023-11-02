
@interface SFPrivacyReportWebsiteTableViewCell : SFPrivacyReportTrackingTableViewCell {
    WBSTrackedFirstParty * _website;
}

@property (nonatomic, retain) WBSTrackedFirstParty *website;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setWebsite:(id)arg1;
- (id)website;

@end
