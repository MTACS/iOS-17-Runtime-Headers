
@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell {
    <SFPrivacyReportDetailToggleTableViewCellDelegate> * _delegate;
    long long  _detailType;
    UISegmentedControl * _segmentedControl;
    UILabel * _titleLabel;
    bool  _useCurrentWebsiteHeader;
}

@property (nonatomic) <SFPrivacyReportDetailToggleTableViewCellDelegate> *delegate;
@property (nonatomic) long long detailType;
@property (nonatomic) bool useCurrentWebsiteHeader;

- (void).cxx_destruct;
- (void)_addSegmentForDetailType:(long long)arg1;
- (void)_selectDetailType:(long long)arg1;
- (void)_updateTitle;
- (id)delegate;
- (long long)detailType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDetailType:(long long)arg1;
- (void)setUseCurrentWebsiteHeader:(bool)arg1;
- (bool)useCurrentWebsiteHeader;

@end
