
@interface VKLineSegment : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

- (struct CGPoint { double x1; double x2; })endPoint;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
