
@interface STUsageSummaryTitleView : UIView {
    UIImageView * _deltaAverageImageView;
    NSLayoutConstraint * _deltaAverageImageViewHeightConstraint;
    NSLayoutConstraint * _deltaAverageImageViewVerticalPosition;
    NSLayoutConstraint * _deltaAverageImageViewWidthConstraint;
    UILabel * _deltaAverageLabel;
    bool  _hasMultilineLayout;
    UIImageView * _notificationDot;
    double  _previousWidth;
    UILabel * _titleLabel;
    bool  _truncateAverageLabel;
    unsigned long long  _usageItemType;
    UILabel * _usageLabel;
    STUsageReport * _usageReport;
    bool  _useVibrancy;
    NSArray * _variableConstraints;
}

@property (readonly) UIImageView *deltaAverageImageView;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewHeightConstraint;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewVerticalPosition;
@property (readonly) NSLayoutConstraint *deltaAverageImageViewWidthConstraint;
@property (readonly) UILabel *deltaAverageLabel;
@property bool hasMultilineLayout;
@property (retain) UIImageView *notificationDot;
@property double previousWidth;
@property (readonly) UILabel *titleLabel;
@property (readonly) bool truncateAverageLabel;
@property (nonatomic) unsigned long long usageItemType;
@property (readonly) UILabel *usageLabel;
@property (nonatomic, retain) STUsageReport *usageReport;
@property (readonly) bool useVibrancy;
@property (retain) NSArray *variableConstraints;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setupSubviews;
- (bool)_shouldHaveMultilineLayoutForLineWidth:(double)arg1;
- (void)_updateDeltaAverageViews;
- (void)_updateTitleLabel;
- (void)_updateUsageLabel;
- (void)awakeFromNib;
- (id)deltaAverageImageView;
- (id)deltaAverageImageViewHeightConstraint;
- (id)deltaAverageImageViewVerticalPosition;
- (id)deltaAverageImageViewWidthConstraint;
- (id)deltaAverageLabel;
- (bool)hasMultilineLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithVibrancy:(bool)arg1 usageItemType:(unsigned long long)arg2 truncateAverageLabel:(bool)arg3;
- (id)notificationDot;
- (double)previousWidth;
- (void)setHasMultilineLayout:(bool)arg1;
- (void)setNotificationDot:(id)arg1;
- (void)setPreviousWidth:(double)arg1;
- (void)setUsageItemType:(unsigned long long)arg1;
- (void)setUsageReport:(id)arg1;
- (void)setVariableConstraints:(id)arg1;
- (id)titleLabel;
- (bool)truncateAverageLabel;
- (unsigned long long)usageItemType;
- (id)usageLabel;
- (id)usageReport;
- (bool)useVibrancy;
- (id)variableConstraints;

@end
