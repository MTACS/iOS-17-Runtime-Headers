
@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun> {
    double  _baseline;
    unsigned long long  _glyphCount;
    _UIVectorTextLayoutInfo * _layoutInfo;
    unsigned long long  _lineIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lineRect;
    struct __CTRun { } * _runRef;
    NSAttributedString * _sourceString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _usedLineRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _usedRunRect;
}

@property (nonatomic, readonly) struct __CTRun { }*_CTRun;
@property (nonatomic) double baseline;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lineIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lineRect;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } usedLineRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } usedRunRect;

- (void).cxx_destruct;
- (struct __CTRun { }*)_CTRun;
- (void)_enumerateGlyphsUsingBlock:(id /* block */)arg1;
- (double)baseline;
- (void)dealloc;
- (void)enumerateGlyphsUsingBlock:(id /* block */)arg1;
- (id)font;
- (long long)glyphCount;
- (id)initWithCTRun:(struct __CTRun { }*)arg1 lineIndex:(unsigned long long)arg2 layoutInfo:(id)arg3;
- (unsigned long long)lineIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineRect;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setBaseline:(double)arg1;
- (void)setLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsedLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsedRunRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldRender;
- (id)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedLineRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedRunRect;

@end
