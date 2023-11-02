
@interface WFCircularImageView : UIImageView {
    bool  _circular;
    bool  _hasBorder;
}

@property (getter=isCircular, nonatomic) bool circular;
@property (nonatomic) bool hasBorder;

- (bool)hasBorder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCircular;
- (void)layoutSubviews;
- (void)setCircular:(bool)arg1;
- (void)setHasBorder:(bool)arg1;

@end
