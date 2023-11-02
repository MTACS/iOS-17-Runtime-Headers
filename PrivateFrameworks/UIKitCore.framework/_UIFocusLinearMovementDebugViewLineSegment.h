
@interface _UIFocusLinearMovementDebugViewLineSegment : NSObject {
    UIBezierPath * _arrowHeadPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endRect;
    _UIFocusLinearMovementDebugViewLineSegment * _previousSegment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startRect;
    UIBezierPath * _stemPath;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startRect;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_calculateArrowHeadPath;
- (void)_calculatePaths;
- (id)_calculateStemPathFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; }*)arg3 endPoint:(struct CGPoint { double x1; double x2; }*)arg4;
- (id)_flattenedBezierPathFromBezierPath:(id)arg1;
- (id)_pathElementsFromPath:(id)arg1;
- (void)_subdivideBezier:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 controlPoint1:(struct CGPoint { double x1; double x2; })arg3 controlPoint2:(struct CGPoint { double x1; double x2; })arg4 endPoint:(struct CGPoint { double x1; double x2; })arg5;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endRect;
- (id)initWithStartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 endRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 previousSegment:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startRect;
- (long long)type;

@end
