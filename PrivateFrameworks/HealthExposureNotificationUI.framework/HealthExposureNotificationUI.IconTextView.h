
@interface HealthExposureNotificationUI.IconTextView : UIView {
    void delegate;
    void details;
    void highlightedText;
    void icon;
    void iconView;
    void textStack;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)didTapText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
