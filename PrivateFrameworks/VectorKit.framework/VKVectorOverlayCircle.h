
@interface VKVectorOverlayCircle : VKVectorOverlayData {
    double  _alpha;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _bounds;
    struct CGColor { } * _fillColor;
    double  _lineWidth;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _mapRect;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _propertiesLock;
    struct shared_ptr<md::CircleOverlayRenderable> { 
        struct CircleOverlayRenderable {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderable;
    struct CGColor { } * _strokeColor;
    struct shared_ptr<md::CircleOverlayRenderable::Style> { 
        struct Style {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _style;
}

@property (nonatomic) double alpha;
@property (getter=_bounds, nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  bounds; /* unknown property attribute:  1>=[2d]}} */
@property (nonatomic) struct CGColor { }*fillColor;
@property (nonatomic) double lineWidth;
@property (getter=_renderable, nonatomic, readonly) struct shared_ptr<md::CircleOverlayRenderable> { struct CircleOverlayRenderable {} *x1; struct __shared_weak_count {} *x2; } renderable;
@property (nonatomic) struct CGColor { }*strokeColor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })_bounds;
- (struct shared_ptr<md::CircleOverlayRenderable> { struct CircleOverlayRenderable {} *x1; struct __shared_weak_count {} *x2; })_renderable;
- (void)_updateStyleColor;
- (double)alpha;
- (void)dealloc;
- (struct CGColor { }*)fillColor;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2 fillColor:(struct CGColor { }*)arg3 strokeColor:(struct CGColor { }*)arg4 alpha:(double)arg5;
- (double)lineWidth;
- (void)setAlpha:(double)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)strokeColor;

@end
