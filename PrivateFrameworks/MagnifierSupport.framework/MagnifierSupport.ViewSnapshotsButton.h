
@interface MagnifierSupport.ViewSnapshotsButton : UIControl {
    void containerView;
    void contentSizeCategorySubscription;
    void dimmedColor;
    void disabledColor;
    void enabledColor;
    void icon;
    void isDimmed;
    void label;
    void rotationSubscription;
    void snapshotCount;
}

@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, copy) NSString *largeContentTitle;

- (void).cxx_destruct;
- (void)dragExited:(id)arg1;
- (void)dragReturned:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (void)setLargeContentImage:(id)arg1;
- (void)setLargeContentTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
