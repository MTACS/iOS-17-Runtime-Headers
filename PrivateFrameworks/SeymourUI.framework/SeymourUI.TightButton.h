
@interface SeymourUI.TightButton : UIButton

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;

@end
