
@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView {
    SFPrivacyReportOverviewCellContentView * _mostBlockedTrackerView;
    <WBSPrivacyReportDataProvider> * _reportDataProvider;
    SFPrivacyReportOverviewCellContentView * _trackersPreventedFromProfilingView;
    bool  _usesInsetStyle;
    SFPrivacyReportOverviewCellContentView * _websitesContainingTrackersView;
}

@property (nonatomic) bool usesInsetStyle;

- (void).cxx_destruct;
- (id)initWithPrivacyReportDataProvider:(id)arg1;
- (double)interItemSpacing;
- (bool)itemViewCanUseCompactWidth:(id)arg1;
- (bool)itemViewIsLineBreak:(id)arg1;
- (void)setUsesInsetStyle:(bool)arg1;
- (bool)usesInsetStyle;

@end
