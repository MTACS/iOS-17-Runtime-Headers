
@interface SXGradient : NSObject {
    NSArray * _colors;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    NSArray * _locations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;

- (void).cxx_destruct;
- (id)colors;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)initWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 colors:(id)arg3 locations:(id)arg4;
- (id)locations;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
