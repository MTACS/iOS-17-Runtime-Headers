
@interface CoreAudioKit.AUVerticalSegmentControl : UIControl {
    void accessibleElements;
    void columnCount;
    void items;
    void segmentHeight;
    void selectedSegmentIndex;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)segmentEnabledChangedWithNotification:(id)arg1;
- (void)segmentSelectionChangedWithNotification:(id)arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
