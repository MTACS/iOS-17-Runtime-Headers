
@interface SeymourUI.AccountButton : UIControl {
    void avatarViewController;
    void highlightTask;
    void highlightView;
    void imageView;
    void layout;
    void onLongPressed;
}

@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)longPressWithGesture:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)tappedDown;
- (void)tappedUp;
- (id)tintColor;

@end
