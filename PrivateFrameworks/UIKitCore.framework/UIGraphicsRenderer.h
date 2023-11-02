
@interface UIGraphicsRenderer : NSObject {
    UIGraphicsRendererFormat * _format;
    _UIReusePool * _reusePool;
}

@property (nonatomic, readonly) bool allowsImageOutput;
@property (nonatomic, readonly) UIGraphicsRendererFormat *format;

+ (struct CGContext { }*)_contextWithFormat:(id)arg1 renderer:(id)arg2;
+ (void)_destroyCGContext:(struct CGContext { }*)arg1 withRenderer:(id)arg2;
+ (bool)_supportsContextReuse;
+ (struct CGContext { }*)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext { }*)arg1 withRendererContext:(id)arg2;
+ (Class)rendererContextClass;

- (void).cxx_destruct;
- (void)_configureReuseState;
- (struct CGContext { }*)_dequeueContextForReuse;
- (void)_enqueueContextForReuse:(struct CGContext { }*)arg1;
- (void)_prepareContextForReuse:(struct CGContext { }*)arg1;
- (bool)allowsImageOutput;
- (id)format;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(id)arg2;
- (id)initWithFormat:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)popContext:(id)arg1;
- (void)pushContext:(id)arg1;
- (bool)runDrawingActions:(id /* block */)arg1 completionActions:(id /* block */)arg2 error:(id*)arg3;
- (bool)runDrawingActions:(id /* block */)arg1 completionActions:(id /* block */)arg2 format:(id)arg3 error:(id*)arg4;

@end