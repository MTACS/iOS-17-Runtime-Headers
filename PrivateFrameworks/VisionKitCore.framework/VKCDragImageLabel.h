
@interface VKCDragImageLabel : UILabel {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customEdgeInsets;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setCustomEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
