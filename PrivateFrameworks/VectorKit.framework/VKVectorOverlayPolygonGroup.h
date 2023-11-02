
@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData {
    double  _alpha;
    struct CGColor { } * _fillColor;
    long long  _lineJoin;
    double  _lineWidth;
    double  _miterLimit;
    NSArray * _polygons;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _propertiesLock;
    struct CGColor { } * _strokeColor;
    double  _strokeEnd;
    double  _strokeStart;
    struct shared_ptr<md::PolygonOverlayRenderable::Style> { 
        struct Style {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _style;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGColor { }*fillColor;
@property (nonatomic) long long lineJoin;
@property (nonatomic) double lineWidth;
@property (nonatomic) double miterLimit;
@property (nonatomic, readonly) NSArray *polygons;
@property (nonatomic) struct CGColor { }*strokeColor;
@property (nonatomic) double strokeEnd;
@property (nonatomic) double strokeStart;
@property (getter=_style, nonatomic, readonly) struct shared_ptr<md::PolygonOverlayRenderable::Style> { struct Style {} *x1; struct __shared_weak_count {} *x2; } style;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<md::PolygonOverlayRenderable::Style> { struct Style {} *x1; struct __shared_weak_count {} *x2; })_style;
- (void)_updateStyleColor;
- (double)alpha;
- (void)dealloc;
- (struct CGColor { }*)fillColor;
- (id)initWithPolygons:(id)arg1;
- (long long)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (id)polygons;
- (void)setAlpha:(double)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setLineJoin:(long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (struct CGColor { }*)strokeColor;
- (double)strokeEnd;
- (double)strokeStart;

@end
