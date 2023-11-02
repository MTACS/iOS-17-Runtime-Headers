
@interface CUIVectorGlyphLayer : NSObject {
    bool  _alwaysPulses;
    struct CGPath { } * _clipPathFromSublayers;
    <CUIVectorGlyhLayerDelegate> * _delegate;
    unsigned long long  _index;
    bool  _isEraserLayer;
    unsigned long long  _motionGroup;
    NSString * _name;
    double  _opacity;
    id  _referenceShape;
    double  _strokeWidth;
    NSArray * _sublayers;
    double  _valueThreshold;
}

@property (nonatomic, readonly) bool alwaysPulses;
@property (nonatomic) <CUIVectorGlyhLayerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) bool isEraserLayer;
@property (nonatomic, readonly) unsigned long long motionGroup;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) bool needsWideGamut;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly, retain) id referenceShape;
@property (nonatomic, readonly) double strokeWidth;
@property (nonatomic, readonly, retain) NSArray *sublayers;
@property (nonatomic, readonly) double valueThreshold;

+ (id)_colorNameForRenderingStyle:(id)arg1;
+ (id)_createShapeLayerWithLayerTreeNode:(struct CGSVGNode { }*)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 shapes:(id)arg4 delegate:(id)arg5;
+ (struct CGColor { }*)_fillColorFromStyle:(struct CGSVGAttributeMap { }*)arg1;
+ (id)_layerHierarchyStyleNames;
+ (unsigned int)_subpathIndicesAtom;
+ (id)createLayerGroupWithLayerNames:(id)arg1 delegate:(id)arg2;
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode { }*)arg1 layerNames:(id)arg2 shapes:(id)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (bool)_anyLayerAlwaysPulses;
- (struct CGColor { }*)_colorForVariableThreshold:(double)arg1 variableMinValue:(double)arg2 variableMaxValue:(double)arg3 onFillColor:(struct CGColor { }*)arg4 offFillColor:(struct CGColor { }*)arg5;
- (id)_initWithName:(id)arg1 index:(unsigned long long)arg2 shape:(struct CGPath { }*)arg3 style:(struct CGSVGAttributeMap { }*)arg4 delegate:(id)arg5;
- (id)_initWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 style:(struct CGSVGAttributeMap { }*)arg4 delegate:(id)arg5;
- (void)_readCSSAttributes:(struct CGSVGAttributeMap { }*)arg1;
- (void)_setAllLayersAlwaysPulse:(bool)arg1;
- (void)_setAlwaysPulses:(bool)arg1;
- (bool)alwaysPulses;
- (bool)anyLayerNeedsWideGamutColor;
- (struct CGPath { }*)copyClipShape;
- (struct CGImage { }*)createImageUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 variableMinValue:(double)arg3 variableMaxValue:(double)arg4 onFillColor:(struct CGColor { }*)arg5 offFillColor:(struct CGColor { }*)arg6;
- (struct CGImage { }*)createSublayerMaskUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 maskColor:(struct CGColor { }*)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)delegate;
- (void)drawInContext:(struct CGContext { }*)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 variableMinValue:(double)arg4 variableMaxValue:(double)arg5 onFillColor:(struct CGColor { }*)arg6 offFillColor:(struct CGColor { }*)arg7;
- (unsigned long long)index;
- (bool)isEraserLayer;
- (unsigned long long)motionGroup;
- (id)name;
- (bool)needsWideGamut;
- (double)opacity;
- (id)referenceShape;
- (void)setDelegate:(id)arg1;
- (struct CGPath { }*)shape;
- (struct CGPath { }*)shapeAtScale:(double)arg1;
- (double)strokeWidth;
- (id)sublayers;
- (double)valueThreshold;

@end
