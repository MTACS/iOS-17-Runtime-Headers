
@interface VKVectorOverlayPolylineGroup : VKVectorOverlayData {
    double  _alpha;
    struct CGColor { } * _color;
    long long  _lineCap;
    long long  _lineJoin;
    double  _lineWidth;
    double  _miterLimit;
    NSArray * _polylines;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _propertiesLock;
    double  _strokeEnd;
    double  _strokeStart;
    struct shared_ptr<md::PolylineOverlayStyle> { 
        struct PolylineOverlayStyle {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _style;
}

@property (nonatomic) double alpha;
@property (nonatomic) struct CGColor { }*color;
@property (nonatomic) long long lineCap;
@property (nonatomic) long long lineJoin;
@property (nonatomic) double lineWidth;
@property (nonatomic) double miterLimit;
@property (nonatomic, readonly) NSArray *polylines;
@property (nonatomic) double strokeEnd;
@property (nonatomic) double strokeStart;
@property (nonatomic, readonly) struct shared_ptr<md::PolylineOverlayStyle> { struct PolylineOverlayStyle {} *x1; struct __shared_weak_count {} *x2; } style;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateStyleColor;
- (double)alpha;
- (struct CGColor { }*)color;
- (void)dealloc;
- (id)initWithPolylines:(id)arg1;
- (long long)lineCap;
- (long long)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (id)polylines;
- (void)setAlpha:(double)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setColorStopColors:(id)arg1 locations:(id)arg2;
- (void)setLineCap:(long long)arg1;
- (void)setLineJoin:(long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (double)strokeEnd;
- (double)strokeStart;
- (struct shared_ptr<md::PolylineOverlayStyle> { struct PolylineOverlayStyle {} *x1; struct __shared_weak_count {} *x2; })style;

@end
