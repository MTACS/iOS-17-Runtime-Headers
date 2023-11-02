
@interface MKOverlayPathRenderer : MKOverlayRenderer {
    bool  _externalSubclassOverridesDrawingMethods;
    UIColor * _fillColor;
    int  _lineCap;
    NSArray * _lineDashPattern;
    double  _lineDashPhase;
    int  _lineJoin;
    double  _lineWidth;
    double  _miterLimit;
    struct CGPath { } * _path;
    NSMutableDictionary * _runningVectorGeometryAnimations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _runningVectorGeometryAnimationsLock;
    bool  _shouldRasterize;
    UIColor * _strokeColor;
    MKUsageCounter * _usageCounter;
}

@property (getter=_externalSubclassOverridesDrawingMethods, nonatomic, readonly) bool externalSubclassOverridesDrawingMethods;
@property (retain) UIColor *fillColor;
@property int lineCap;
@property (copy) NSArray *lineDashPattern;
@property double lineDashPhase;
@property int lineJoin;
@property double lineWidth;
@property double miterLimit;
@property struct CGPath { }*path;
@property (nonatomic) bool shouldRasterize;
@property (retain) UIColor *strokeColor;
@property (getter=_usageCounter, setter=_setUsageCounter:, nonatomic) MKUsageCounter *usageCounter;

+ (bool)_externalSubclassOverridesDrawingMethods;
+ (Class)_mapkitLeafClass;

- (void).cxx_destruct;
- (void)_animateVectorGeometryIfNecessaryForKey:(id)arg1 withStepHandler:(id /* block */)arg2;
- (bool)_canProvideVectorGeometry;
- (void)_decodePropertiesWithCoder:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (bool)_externalSubclassOverridesDrawingMethods;
- (void)_performInitialConfiguration;
- (void)_setUsageCounter:(id)arg1;
- (id)_usageCounter;
- (void)applyFillPropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(double)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(double)arg2;
- (bool)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)createPath;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)fillColor;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithOverlay:(id)arg1;
- (void)invalidatePath;
- (int)lineCap;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (int)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (struct CGPath { }*)path;
- (void)setFillColor:(id)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setStrokeColor:(id)arg1;
- (bool)shouldRasterize;
- (id)strokeColor;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

@end
