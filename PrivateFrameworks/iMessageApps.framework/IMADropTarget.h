
@interface IMADropTarget : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    double  _meshScaleFactor;
    double  _rotation;
    double  _scale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenCoordinate;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic, readonly) double meshScaleFactor;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } screenCoordinate;

- (id)description;
- (id)initWithScreenCoordinate:(struct CGPoint { double x1; double x2; })arg1 initialSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5;
- (struct CGSize { double x1; double x2; })initialSize;
- (double)meshScaleFactor;
- (double)rotation;
- (double)scale;
- (struct CGPoint { double x1; double x2; })screenCoordinate;

@end
