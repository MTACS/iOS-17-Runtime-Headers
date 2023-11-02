
@interface SeymourUI.UpNextQueuePopOverBackgroundView : UIPopoverBackgroundView

@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;

- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;

@end
