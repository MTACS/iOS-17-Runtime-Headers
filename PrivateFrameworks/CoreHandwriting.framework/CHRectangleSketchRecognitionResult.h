
@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult {
    struct CGPoint { 
        double x; 
        double y; 
    }  _lowerLeftPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lowerRightPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGPoint { 
        double x; 
        double y; 
    }  _upperLeftPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _upperRightPoint;
}

@property (readonly) struct CGPoint { double x1; double x2; } lowerLeftPoint;
@property (readonly) struct CGPoint { double x1; double x2; } lowerRightPoint;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) struct CGPoint { double x1; double x2; } upperLeftPoint;
@property (readonly) struct CGPoint { double x1; double x2; } upperRightPoint;

- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(struct CGPoint { double x1; double x2; })arg4 upperRightPoint:(struct CGPoint { double x1; double x2; })arg5 lowerLeftPoint:(struct CGPoint { double x1; double x2; })arg6 lowerRightPoint:(struct CGPoint { double x1; double x2; })arg7 size:(struct CGSize { double x1; double x2; })arg8;
- (struct CGPoint { double x1; double x2; })lowerLeftPoint;
- (struct CGPoint { double x1; double x2; })lowerRightPoint;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })upperLeftPoint;
- (struct CGPoint { double x1; double x2; })upperRightPoint;

@end
