
@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider> {
    <UICoordinateSpace> * __coordinateSpace;
    struct CGPoint { 
        double x; 
        double y; 
    }  __point;
}

@property (nonatomic, readonly) <UICoordinateSpace> *_coordinateSpace;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _point;

- (void).cxx_destruct;
- (id)_coordinateSpace;
- (struct CGPoint { double x1; double x2; })_point;
- (id)init;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;

@end
