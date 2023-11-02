
@interface GCControllerTouchpad : GCControllerElement {
    struct CGPoint { 
        double x; 
        double y; 
    }  _absolutePosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteTouchDownPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteWindowLocation;
    bool  _beganTouchOutsideBounds;
    GCControllerButtonInput * _button;
    NSString * _descriptionName;
    bool  _leftBufferZone;
    float  _previousButtonState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _relativePosition;
    bool  _reportsAbsoluteTouchSurfaceValues;
    id /* block */  _touchDown;
    id /* block */  _touchMoved;
    long long  _touchState;
    GCControllerDirectionPad * _touchSurface;
    id /* block */  _touchUp;
    float  _touchpadRelativeOriginBufferSize;
    float  _touchpadRelativeWindowSize;
}

@property (nonatomic, readonly) GCControllerButtonInput *button;
@property (nonatomic) bool reportsAbsoluteTouchSurfaceValues;
@property (nonatomic, copy) id /* block */ touchDown;
@property (nonatomic, copy) id /* block */ touchMoved;
@property (nonatomic, readonly) long long touchState;
@property (nonatomic, retain) GCControllerDirectionPad *touchSurface;
@property (nonatomic, copy) id /* block */ touchUp;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })addCGPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)button;
- (bool)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(bool)arg3;
- (struct CGPoint { double x1; double x2; })clampPoint:(struct CGPoint { double x1; double x2; })arg1 toLength:(double)arg2;
- (id)description;
- (bool)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(bool)arg3;
- (double)distanceBetweenCGPoint:(struct CGPoint { double x1; double x2; })arg1 andCGPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptionName:(id)arg1;
- (double)magnitudeForCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mulCGPoint:(struct CGPoint { double x1; double x2; })arg1 byScalar:(double)arg2;
- (struct CGPoint { double x1; double x2; })normalizeCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)reportDigitizerChange:(id)arg1;
- (bool)reportsAbsoluteTouchSurfaceValues;
- (struct CGPoint { double x1; double x2; })scaleCGPoint:(struct CGPoint { double x1; double x2; })arg1 toLength:(double)arg2;
- (bool)setDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(bool)arg3 queue:(id)arg4;
- (void)setReportsAbsoluteTouchSurfaceValues:(bool)arg1;
- (void)setTouchDown:(id /* block */)arg1;
- (void)setTouchMoved:(id /* block */)arg1;
- (void)setTouchSurface:(id)arg1;
- (void)setTouchUp:(id /* block */)arg1;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2 touchDown:(bool)arg3 buttonValue:(float)arg4;
- (struct CGPoint { double x1; double x2; })subCGPoint:(struct CGPoint { double x1; double x2; })arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id /* block */)touchDown;
- (id /* block */)touchMoved;
- (long long)touchState;
- (id)touchSurface;
- (id /* block */)touchUp;

@end
