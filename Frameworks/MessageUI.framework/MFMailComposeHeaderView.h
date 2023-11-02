
@interface MFMailComposeHeaderView : CNComposeHeaderView {
    MFComposeDisplayMetrics * _displayMetrics;
}

@property (nonatomic, retain) MFComposeDisplayMetrics *displayMetrics;

- (void).cxx_destruct;
- (id)displayMetrics;
- (void)displayMetricsDidChange;
- (void)layoutMarginsDidChange;
- (void)setDisplayMetrics:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
