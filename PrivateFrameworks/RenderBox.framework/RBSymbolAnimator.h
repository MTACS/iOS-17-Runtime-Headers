
@interface RBSymbolAnimator : NSObject {
    struct Animator { 
        struct spin_lock { 
            struct os_unfair_lock_s { 
                unsigned int _os_unfair_lock_opaque; 
            } _lock; 
        } _lock; 
        struct refcounted_ptr<RB::Symbol::Model> { 
            struct Model {} *_p; 
        } _model; 
        struct vector<RB::Symbol::Animation, 0UL, unsigned long> { 
            struct Animation {} *_p; 
            unsigned long long _size; 
            unsigned long long _capacity; 
        } _animations; 
        double _current_time; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*_presentation_position; 
    }  _animator;
    bool  _needs_notify;
    /* Warning: unhandled struct encoding: '{vector<id<RBSymbolAnimatorObserver>, 2UL, unsigned int>="_p"[16C]"_p"^@"_size"I"_capacity"I}' */ struct vector<id<RBSymbolAnimatorObserver>, 2UL, unsigned int> { 
        unsigned char _p[16]; 
        _size **_p; 
    }  _observers;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned int depth;
@property (getter=isFocused, nonatomic) bool focused;
@property (nonatomic, retain) CUINamedVectorGlyph *glyph;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) double maxVelocity;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } opacities;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) struct CGPoint { double x1; double x2; } presentationPosition;
@property (nonatomic) unsigned int renderingMode;
@property (nonatomic) int scaleLevel;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) unsigned int state;
@property (nonatomic, readonly) unsigned int styleMask;
@property (nonatomic) double variableValue;
@property (nonatomic, readonly) unsigned int version;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)addAnimation:(unsigned int)arg1 options:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct _RBSymbolUpdate { }*)beginUpdateWithRenderingMode:(unsigned int)arg1;
- (struct _RBSymbolUpdate { }*)beginUpdateWithRenderingMode:(unsigned int)arg1 position:(const struct CGPoint { double x1; double x2; }*)arg2 size:(const struct CGSize { double x1; double x2; }*)arg3 flags:(unsigned int)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (void)cancelAllAnimations;
- (void)cancelAnimation:(unsigned int)arg1;
- (void)cancelAnimationWithID:(unsigned int)arg1;
- (double)currentTime;
- (void)dealloc;
- (unsigned int)depth;
- (void)endUpdate:(struct _RBSymbolUpdate { }*)arg1;
- (id)glyph;
- (bool)isAnimating;
- (bool)isFocused;
- (bool)isHidden;
- (double)maxVelocity;
- (struct { float x1; float x2; float x3; float x4; })opacities;
- (struct CGPoint { double x1; double x2; })position;
- (struct CGPoint { double x1; double x2; })presentationPosition;
- (void)removeAllAnimations;
- (void)removeAnimation:(unsigned int)arg1;
- (void)removeAnimationWithID:(unsigned int)arg1;
- (unsigned int)renderingMode;
- (int)scaleLevel;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDepth:(unsigned int)arg1;
- (void)setFocused:(bool)arg1;
- (void)setGlyph:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setOpacities:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPresentationPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPriority:(float)arg1 ofAnimationWithID:(unsigned int)arg2;
- (void)setRenderingMode:(unsigned int)arg1;
- (void)setScaleLevel:(int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setState:(unsigned int)arg1;
- (void)setVariableValue:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned int)state;
- (unsigned int)styleMask;
- (double)variableValue;
- (unsigned int)version;

@end
