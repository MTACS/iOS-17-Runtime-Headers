
@interface CKBrowserDragControllerTarget : NSObject {
    unsigned long long  _associatedLayoutIntent;
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

@property (nonatomic) unsigned long long associatedLayoutIntent;
@property (nonatomic) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic) double meshScaleFactor;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x1; double x2; } screenCoordinate;

+ (id)targetWithScreenCoordinate:(struct CGPoint { double x1; double x2; })arg1 initialSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 associatedLayoutIntent:(unsigned long long)arg6;

- (unsigned long long)associatedLayoutIntent;
- (id)description;
- (struct CGSize { double x1; double x2; })initialSize;
- (double)meshScaleFactor;
- (double)rotation;
- (double)scale;
- (struct CGPoint { double x1; double x2; })screenCoordinate;
- (void)setAssociatedLayoutIntent:(unsigned long long)arg1;
- (void)setInitialSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMeshScaleFactor:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setScreenCoordinate:(struct CGPoint { double x1; double x2; })arg1;

@end
