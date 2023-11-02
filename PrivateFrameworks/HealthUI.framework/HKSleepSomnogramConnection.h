
@interface HKSleepSomnogramConnection : NSObject {
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
- (id)initWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
