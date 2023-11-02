
@interface HKSleepSomnogramBar : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _barRect;
    double  _bottom;
    double  _horizontalMidpoint;
    double  _left;
    double  _right;
    double  _top;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } barRect;
@property (nonatomic, readonly) double bottom;
@property (nonatomic, readonly) double horizontalMidpoint;
@property (nonatomic, readonly) double left;
@property (nonatomic, readonly) double right;
@property (nonatomic, readonly) double top;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barRect;
- (double)bottom;
- (double)horizontalMidpoint;
- (id)initWithBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)left;
- (double)right;
- (double)top;

@end
