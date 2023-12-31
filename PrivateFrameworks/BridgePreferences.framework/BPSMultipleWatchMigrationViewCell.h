
@interface BPSMultipleWatchMigrationViewCell : UITableViewCell {
    BPSCheckMarkView * _checkmarkView;
    UILabel * _deviceDetailLabel;
    BPSRemoveMigrationWatchView * _watchView;
}

@property (nonatomic, retain) BPSCheckMarkView *checkmarkView;
@property (nonatomic, retain) UILabel *deviceDetailLabel;
@property (nonatomic, retain) BPSRemoveMigrationWatchView *watchView;

- (void).cxx_destruct;
- (id)checkmarkView;
- (id)deviceDetailLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setCheckmarkView:(id)arg1;
- (void)setDeviceDetailLabel:(id)arg1;
- (void)setWatchView:(id)arg1;
- (id)watchView;

@end
