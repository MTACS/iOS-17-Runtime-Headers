
@interface WDSpinnerTableViewCell : UITableViewCell {
    UIView * _contentContainerView;
    UIActivityIndicatorView * _spinner;
    UILabel * _waitingReasonLabel;
}

@property (retain) UIView *contentContainerView;
@property (retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) NSString *waitingReason;
@property (retain) UILabel *waitingReasonLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)contentContainerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setContentContainerView:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setWaitingReason:(id)arg1;
- (void)setWaitingReasonLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)spinner;
- (id)waitingReason;
- (id)waitingReasonLabel;

@end
