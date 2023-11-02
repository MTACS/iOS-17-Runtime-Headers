
@interface RBSymbolLayer : CALayer <RBAnimationHandler, RBLayerDelegate, RBSymbolAnimatorObserver> {
    struct objc_ptr<RBSymbolAnimator *> { 
        RBSymbolAnimator *_p; 
    }  _animator;
    unsigned int  _drawingOptions;
    struct objc_ptr<id<RBDisplayListContents>> { 
        <RBDisplayListContents> *_p; 
    }  _drawnList;
    double  _last_time;
    struct spin_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _lock;
    unsigned char  _state;
    struct objc_ptr<RBColor (^)(RBSymbolStyle, NSString *)>="_p"@? {}  _styleResolver;
    struct { 
        struct CGVector { 
            double dx; 
            double dy; 
        } scale; 
        struct CGVector { 
            double dx; 
            double dy; 
        } translation; 
    }  _symbolTransform;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _update_count;
    bool  _visible;
}

@property (nonatomic, retain) RBSymbolAnimator *animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawingOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ styleResolver;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct CGVector { double x_1_1_1; double x_1_1_2; } x1; struct CGVector { double x_2_1_1; double x_2_1_2; } x2; } symbolTransform;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)RBLayerDefaultDevice:(id)arg1;
- (id)actionForKey:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)animator;
- (void)configureSublayer:(id)arg1 type:(unsigned int)arg2;
- (void)dealloc;
- (void)display;
- (unsigned int)drawingOptions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (struct { float x1; float x2; float x3; float x4; })resolveStyle:(unsigned int)arg1 colorName:(id)arg2;
- (void)runAnimationAtTime:(double)arg1;
- (void)setAnimator:(id)arg1;
- (void)setDrawingOptions:(unsigned int)arg1;
- (void)setNeedsLayout;
- (void)setStyleResolver:(id /* block */)arg1;
- (void)setSymbolTransform:(struct { struct CGVector { double x_1_1_1; double x_1_1_2; } x1; struct CGVector { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)styleResolver;
- (void)symbolAnimatorDidChange:(id)arg1;
- (struct { struct CGVector { double x_1_1_1; double x_1_1_2; } x1; struct CGVector { double x_2_1_1; double x_2_1_2; } x2; })symbolTransform;

@end
