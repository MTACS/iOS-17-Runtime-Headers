
@interface SFPrivacyReportTrackerTableViewCell : SFPrivacyReportTrackingTableViewCell {
    WBSKnownTrackingThirdParty * _tracker;
}

@property (nonatomic, retain) WBSKnownTrackingThirdParty *tracker;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTracker:(id)arg1;
- (id)tracker;

@end
