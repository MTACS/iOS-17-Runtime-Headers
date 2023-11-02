
@interface UISelectionGrabberCustomPath : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomPoint;
    double  _lineWidth;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } bottomPoint;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingEdgeRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) bool containsZeroPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGPoint { double x1; double x2; } topPoint;

- (id)bezierPathForHostView:(id)arg1 targetView:(id)arg2;
- (struct CGPoint { double x1; double x2; })bottomPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingEdgeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (bool)containsZeroPoint;
- (id)description;
- (double)lineWidth;
- (void)setBottomPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setTopPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)summaryDescription;
- (struct CGPoint { double x1; double x2; })topPoint;

@end
