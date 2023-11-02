
@interface STNotificationsPickupSummaryView : UIView {
    UIStackView * _stackView;
    STUsageReport * _usageReport;
}

@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) STUsageReport *usageReport;

- (void).cxx_destruct;
- (id)_attributedString:(id)arg1 withFont:(id)arg2;
- (id)_attributedStringForNotificationsDetailText;
- (id)_attributedStringForNotificationsTitle;
- (id)_attributedStringForPickUpDetailText;
- (id)_attributedStringForPickUpTitle;
- (id)initWithUsageReport:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setUsageReport:(id)arg1;
- (id)stackView;
- (id)usageReport;

@end
