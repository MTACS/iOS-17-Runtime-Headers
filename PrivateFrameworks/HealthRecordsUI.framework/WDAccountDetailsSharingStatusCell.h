
@interface WDAccountDetailsSharingStatusCell : UITableViewCell {
    NSArray * _noSpinnerConstraint;
    UIActivityIndicatorView * _statusIndicator;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSArray * _withSpinnerConstraint;
}

@property (nonatomic, retain) UIActivityIndicatorView *statusIndicator;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setStatusIndicator:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)startSpinner;
- (id)statusIndicator;
- (void)stopSpinner;
- (id)subtitleLabel;
- (id)titleLabel;

@end
