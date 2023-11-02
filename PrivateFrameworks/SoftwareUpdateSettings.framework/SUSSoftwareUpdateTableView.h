
@interface SUSSoftwareUpdateTableView : UITableView {
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    UILabel * _checkingStatusLabel;
    NSString * _currentVersion;
    bool  _disableScanUI;
    NSDate * _lastScannedDate;
    int  _state;
    bool  _suPathsRestricted;
    UILabel * _subtitleLabel;
    bool  _updatesDeferred;
}

@property (nonatomic, retain) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (nonatomic, retain) UILabel *checkingStatusLabel;
@property (nonatomic, retain) NSString *currentVersion;
@property bool disableScanUI;
@property (nonatomic, retain) NSDate *lastScannedDate;
@property (nonatomic) int state;
@property bool suPathsRestricted;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property bool updatesDeferred;

+ (id)stringForState:(int)arg1;

- (void).cxx_destruct;
- (id)checkingForUpdateSpinner;
- (id)checkingStatusLabel;
- (id)currentVersion;
- (bool)disableScanUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)lastScannedDate;
- (void)layoutSubviews;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setCheckingStatusLabel:(id)arg1;
- (void)setCurrentVersion:(id)arg1;
- (void)setDisableScanUI:(bool)arg1;
- (void)setLastScannedDate:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSuPathsRestricted:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setUpdatesDeferred:(bool)arg1;
- (int)state;
- (bool)suPathsRestricted;
- (id)subtitleLabel;
- (id)upToDateManagedText;
- (id)upToDateText;
- (id)upToDateWithAlternate;
- (bool)updatesDeferred;

@end
