
@interface _HKRelativeLineSeriesBlockCoordinate : _HKLineSeriesBlockCoordinate {
    struct CGPoint { 
        double x; 
        double y; 
    }  _end;
    struct CGPoint { 
        double x; 
        double y; 
    }  _start;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } end;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } midpoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } start;

- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (struct CGPoint { double x1; double x2; })end;
- (double)endXValue;
- (id)initWithStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 userInfo:(id)arg3;
- (struct CGPoint { double x1; double x2; })midpoint;
- (struct CGPoint { double x1; double x2; })start;
- (double)startXValue;

@end
