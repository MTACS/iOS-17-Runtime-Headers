
@interface HealthExposureNotificationUI.VerificationCheckmarkCell : HealthExposureNotificationUI.VerificationCell {
    void accessoryImageView;
    void isChecked;
    void label;
}

@property (nonatomic) bool isChecked;
@property (nonatomic, readonly) UILabel *label;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (id)label;
- (void)layoutSubviews;
- (void)setIsChecked:(bool)arg1;

@end
