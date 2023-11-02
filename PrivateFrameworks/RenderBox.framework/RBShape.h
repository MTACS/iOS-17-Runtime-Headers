
@interface RBShape : NSObject {
    bool  _antialiased;
    struct RBShapeData { 
        int type; 
        unsigned char data[88]; 
    }  _data;
    bool  _eoFill;
    struct InlineHeap<256UL> { 
        unsigned long long _page_size; 
        struct Page {} *_pages; 
        char *_sbrk; 
        char *_sbrk_end; 
        struct ObjectTable {} *_objects; 
        unsigned char _buffer[256]; 
    }  _heap;
}

@property (nonatomic) bool EOFill;
@property (getter=isAntialiased, nonatomic) bool antialiased;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)EOFill;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)init;
- (bool)isAntialiased;
- (void)setAntialiased:(bool)arg1;
- (void)setCircleAtPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
- (void)setCustomGlyphDilation:(struct CGSize { double x1; double x2; })arg1;
- (void)setEOFill:(bool)arg1;
- (void)setEllipseInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmpty;
- (void)setGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(unsigned long long)arg3 font:(struct CGFont { }*)arg4 renderingStyle:(unsigned int)arg5;
- (void)setInfinite;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPath:(struct CGPath { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setRBPath:(struct RBPath { void *x1; struct RBPathCallbacks {} *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadii:(struct { double x1; double x2; double x3; double x4; })arg2 cornerStyle:(int)arg3;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3;
- (void)setRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerSize:(struct CGSize { double x1; double x2; })arg2 cornerStyle:(int)arg3;
- (void)setShouldDrawBitmapRuns:(bool)arg1;
- (void)setStroke:(id)arg1;
- (void)setStrokedCircleAtPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 lineWidth:(double)arg3;
- (void)setStrokedLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 lineWidth:(double)arg3 lineCap:(int)arg4;
- (void)setStrokedPath:(struct CGPath { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6;
- (void)setStrokedPath:(struct CGPath { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double*)arg8 dashCount:(long long)arg9;
- (void)setStrokedRBPath:(struct RBPath { void *x1; struct RBPathCallbacks {} *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double*)arg8 dashCount:(long long)arg9;
- (void)setStrokedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadii:(struct { double x1; double x2; double x3; double x4; })arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;
- (void)setStrokedRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;

@end
