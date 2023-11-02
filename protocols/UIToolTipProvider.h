
@protocol UIToolTipProvider

@required

- (bool)isEnabled;
- (NSString *)toolTipAtPoint:(struct CGPoint { double x1; double x2; })arg1 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;

@end
