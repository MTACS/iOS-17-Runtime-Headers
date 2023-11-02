
@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell {
    NSLayoutConstraint * _bottomLayoutConstraint;
    double  _bottomPadding;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomLayoutConstraint;
@property (nonatomic) double bottomPadding;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)bottomLayoutConstraint;
- (double)bottomPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)messageLabel;
- (void)setBottomLayoutConstraint:(id)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
