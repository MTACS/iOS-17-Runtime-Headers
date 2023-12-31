
@interface UISegmentAccessibilityButton : UIButton {
    UISegment * _segment;
}

@property (nonatomic, retain) UISegment *segment;

+ (id)buttonWithSegment:(id)arg1;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)segment;
- (void)setSegment:(id)arg1;

@end
