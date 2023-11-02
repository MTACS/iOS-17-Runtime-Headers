
@interface ICQBackupStatusView : UIView <PSHeaderFooterView> {
    bool  _animatedToEnabled;
    int  _animatingToState;
    NSError * _backupError;
    UILabel * _backupIssueLabel;
    double  _backupProgress;
    NSDateComponentsFormatter * _durationFormatter;
    NSString * _footerText;
    UILabel * _lastBackupLabel;
    UIProgressView * _progressBar;
    UIActivityIndicatorView * _spinner;
    UILabel * _statusLabel;
    NSArray * _syncErrors;
    UILabel * _timeRemainingLabel;
    NSMutableSet * _visibleSubviews;
}

@property (nonatomic, retain) NSError *backupError;
@property (nonatomic) double backupProgress;
@property (nonatomic, retain) NSString *footerText;
@property (nonatomic, retain) NSArray *syncErrors;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (void)_sizeToFitWidth:(double)arg1 inTableView:(id)arg2;
- (id)backupError;
- (double)backupProgress;
- (void)didMoveToSuperview;
- (id)footerText;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)progress;
- (void)setBackupError:(id)arg1;
- (void)setBackupProgress:(double)arg1;
- (void)setBackupProgress:(double)arg1 timeIntervalRemaining:(double)arg2;
- (void)setFooterText:(id)arg1;
- (void)setLastBackupText:(id)arg1;
- (void)setSyncErrors:(id)arg1;
- (void)sizeToFit;
- (id)syncErrors;
- (void)updateStatus:(id)arg1;
- (void)updateViewsForBackupState:(int)arg1 restoreState:(int)arg2 enabled:(bool)arg3;

@end
