
@interface HealthExposureNotificationUI.NumberedTextView : UIView {
    void details;
    void number;
    void title;
}

@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) long long number;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)details;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)number;
- (id)title;

@end
