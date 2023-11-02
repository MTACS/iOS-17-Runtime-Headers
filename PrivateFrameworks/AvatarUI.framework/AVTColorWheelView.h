
@interface AVTColorWheelView : AVTAttributeValueView {
    NSArray * _circleViews;
    UIView * _containerView;
}

@property (nonatomic, retain) NSArray *circleViews;
@property (nonatomic, retain) UIView *containerView;

+ (id)buildCircleViewWithDiameter:(double)arg1;
+ (bool)colorItems:(id)arg1 containColorItem:(id)arg2;
+ (id)colorItemsFrom:(id)arg1 excluding:(id)arg2;

- (void).cxx_destruct;
- (id)buildAllCircleViews;
- (id)circleViews;
- (id)containerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })rotatePoint:(struct CGPoint { double x1; double x2; })arg1 aroundCenter:(struct CGPoint { double x1; double x2; })arg2 withAngle:(double)arg3;
- (void)setCircleViews:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)updateWithPrimaryItems:(id)arg1 extendedItems:(id)arg2;

@end
