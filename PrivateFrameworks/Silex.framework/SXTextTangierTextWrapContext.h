
@interface SXTextTangierTextWrapContext : NSObject {
    TSWPColumn * _column;
    TSDWrapPolygon * _interiorWrapPolygon;
    TSDLayout<TSWPLayoutTarget> * _target;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _targetInverseTransformInRoot;
    TSUPointerKeyDictionary * _wrapPathInverseTransformInRootDictionary;
}

@property (nonatomic, readonly) TSWPColumn *column;
@property (nonatomic, readonly) TSDWrapPolygon *interiorWrapPolygon;
@property (nonatomic, readonly) TSDLayout<TSWPLayoutTarget> *target;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetInverseTransformInRoot;
@property (nonatomic, retain) TSUPointerKeyDictionary *wrapPathInverseTransformInRootDictionary;

- (void).cxx_destruct;
- (id)column;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;
- (id)interiorWrapPolygon;
- (void)setTarget:(id)arg1;
- (void)setWrapPathInverseTransformInRootDictionary:(id)arg1;
- (id)target;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetInverseTransformInRoot;
- (id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)wrapPathInverseTransformInRootDictionary;

@end
