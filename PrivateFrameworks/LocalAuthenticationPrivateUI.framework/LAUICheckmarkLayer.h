
@interface LAUICheckmarkLayer : CALayer {
    bool  _animating;
    unsigned int  _animation_index;
    struct CGColor { } * _color;
    struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> { 
        struct animation_completion_handler_container {} *__begin_; 
        struct animation_completion_handler_container {} *__end_; 
        struct __compressed_pair<LAUI_CA_utilities::animation_completion_handler_container *, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> { 
            struct animation_completion_handler_container {} *__value_; 
        } __end_cap_; 
    }  _completions;
    double  _effective_line_width;
    double  _line_width;
    double  _line_width_scale;
    UIColor * _primary_color;
    bool  _revealed;
    CAShapeLayer * _shape_layer;
    /* Warning: unhandled struct encoding: '{vector<CAShapeLayer *, std::allocator<CAShapeLayer *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<CAShapeLayer *__strong *, std::allocator<CAShapeLayer *>>="__value_"^@}}' */ struct vector<CAShapeLayer *, std::allocator<CAShapeLayer *>> { 
        __end_ **__begin_; 
    }  _transient_shape_layers;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } aspectSize;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic) double lineWidthScale;
@property (nonatomic, readonly, copy) UIColor *primaryColor;
@property (getter=isRevealed, nonatomic, readonly) bool revealed;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_animationsDidResolve;
- (void)_executeCompletions:(bool)arg1;
- (void)_updateRevealedAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })aspectSize;
- (struct CGColor { }*)color;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSizeForCircleWithDiameter:(double)arg1 scale:(double)arg2;
- (id)init;
- (bool)isRevealed;
- (void)layoutSublayers;
- (double)lineWidthScale;
- (id)primaryColor;
- (void)setColor:(struct CGColor { }*)arg1 animated:(bool)arg2;
- (void)setLineWidthScale:(double)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;

@end
