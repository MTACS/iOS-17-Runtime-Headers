
@interface RBFill : NSObject {
    struct RBFillData { 
        int type; 
        unsigned char data[208]; 
    }  _data;
    struct InlineHeap<64UL> { 
        unsigned long long _page_size; 
        struct Page {} *_pages; 
        char *_sbrk; 
        char *_sbrk_end; 
        struct ObjectTable {} *_objects; 
        unsigned char _buffer[64]; 
    }  _heap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)concat:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)invalidateContents;
- (void)set9PartImage:(struct CGImage { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 capInsets:(struct { double x1; double x2; double x3; double x4; })arg4 repeat:(bool)arg5 interpolation:(int)arg6 tintColor:(struct { float x1; float x2; float x3; float x4; })arg7 flags:(unsigned int)arg8;
- (void)set9PartRBImage:(struct { int x1; void *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 capInsets:(struct { double x1; double x2; double x3; double x4; })arg4 repeat:(bool)arg5 interpolation:(int)arg6 tintColor:(struct { float x1; float x2; float x3; float x4; })arg7 colorSpace:(int)arg8 flags:(unsigned int)arg9;
- (void)set9PartRBImage:(struct { int x1; void *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 capInsets:(struct { double x1; double x2; double x3; double x4; })arg4 repeat:(bool)arg5 interpolation:(int)arg6 tintColor:(struct { float x1; float x2; float x3; float x4; })arg7 flags:(unsigned int)arg8;
- (void)setAngularGradientCenter:(struct CGPoint { double x1; double x2; })arg1 startAngle:(double)arg2 endAngle:(double)arg3 stopCount:(long long)arg4 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg5 colorSpace:(int)arg6 locations:(const double*)arg7 flags:(unsigned int)arg8;
- (void)setAxialGradientStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 stopCount:(long long)arg3 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg4 colorSpace:(int)arg5 locations:(const double*)arg6 flags:(unsigned int)arg7;
- (void)setAxialGradientStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 stopCount:(long long)arg3 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg4 locations:(const double*)arg5 flags:(unsigned int)arg6;
- (void)setColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setColor:(struct { float x1; float x2; float x3; float x4; })arg1 colorSpace:(int)arg2;
- (void)setConicGradientCenter:(struct CGPoint { double x1; double x2; })arg1 angle:(double)arg2 stopCount:(long long)arg3 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg4 colorSpace:(int)arg5 locations:(const double*)arg6 flags:(unsigned int)arg7;
- (void)setConicGradientCenter:(struct CGPoint { double x1; double x2; })arg1 angle:(double)arg2 stopCount:(long long)arg3 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg4 locations:(const double*)arg5 flags:(unsigned int)arg6;
- (void)setImage:(struct CGImage { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 interpolation:(int)arg3 tintColor:(struct { float x1; float x2; float x3; float x4; })arg4 flags:(unsigned int)arg5;
- (void)setRBImage:(struct { int x1; void *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 interpolation:(int)arg3 tintColor:(struct { float x1; float x2; float x3; float x4; })arg4 colorSpace:(int)arg5 flags:(unsigned int)arg6;
- (void)setRBImage:(struct { int x1; void *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 interpolation:(int)arg3 tintColor:(struct { float x1; float x2; float x3; float x4; })arg4 flags:(unsigned int)arg5;
- (void)setRadialGradientCenter:(struct CGPoint { double x1; double x2; })arg1 startRadius:(double)arg2 endRadius:(double)arg3 stopCount:(long long)arg4 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg5 colorSpace:(int)arg6 locations:(const double*)arg7 flags:(unsigned int)arg8;
- (void)setRadialGradientCenter:(struct CGPoint { double x1; double x2; })arg1 startRadius:(double)arg2 endRadius:(double)arg3 stopCount:(long long)arg4 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg5 locations:(const double*)arg6 flags:(unsigned int)arg7;
- (void)setRadialGradientStartCenter:(struct CGPoint { double x1; double x2; })arg1 startRadius:(double)arg2 endCenter:(struct CGPoint { double x1; double x2; })arg3 endRadius:(double)arg4 stopCount:(long long)arg5 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg6 colorSpace:(int)arg7 locations:(const double*)arg8 flags:(unsigned int)arg9;
- (void)setRadialGradientStartCenter:(struct CGPoint { double x1; double x2; })arg1 startRadius:(double)arg2 endCenter:(struct CGPoint { double x1; double x2; })arg3 endRadius:(double)arg4 stopCount:(long long)arg5 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg6 locations:(const double*)arg7 flags:(unsigned int)arg8;
- (void)setShader:(id)arg1 bounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 flags:(unsigned int)arg3;
- (void)setTiledImage:(struct CGImage { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 interpolation:(int)arg4 tintColor:(struct { float x1; float x2; float x3; float x4; })arg5 flags:(unsigned int)arg6;
- (void)setTiledRBImage:(struct { int x1; void *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 interpolation:(int)arg4 tintColor:(struct { float x1; float x2; float x3; float x4; })arg5 colorSpace:(int)arg6 flags:(unsigned int)arg7;
- (void)setTiledRBImage:(struct { int x1; void *x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 interpolation:(int)arg4 tintColor:(struct { float x1; float x2; float x3; float x4; })arg5 flags:(unsigned int)arg6;

@end
