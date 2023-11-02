
@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell {
    double  _count;
    NSNumberFormatter * _countFormatter;
    UILabel * _countLabel;
    SFPrivacyReportMeterBar * _countMeter;
    NSLayoutConstraint * _countMeterWidthConstraint;
    UILabel * _domainDetailLabel;
    UILabel * _domainLabel;
    double  _maxCount;
    UILabel * _maxCountLabel;
    UILayoutGuide * _maxCountMeterGuide;
}

@property (nonatomic) double count;
@property (nonatomic, readonly) UILabel *countLabel;
@property (nonatomic, readonly) UILabel *domainDetailLabel;
@property (nonatomic, readonly) UILabel *domainLabel;
@property (nonatomic) double maxCount;

- (void).cxx_destruct;
- (void)_updateCountViews;
- (double)count;
- (id)countLabel;
- (id)domainDetailLabel;
- (id)domainLabel;
- (id)initWithDetailLabel:(bool)arg1 reuseIdentifier:(id)arg2;
- (double)maxCount;
- (void)setCount:(double)arg1;
- (void)setMaxCount:(double)arg1;

@end
