
@interface RBStrokeAccumulator : NSObject <NSCopying, RBLineStroke, RBParticleStroke, RBStroke> {
    int  _blendMode;
    float  _borderWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _committed;
    struct vector<RBStrokeElement, 0UL, unsigned long> { 
        unsigned char *_p; 
        unsigned long long _size; 
        unsigned long long _capacity; 
    }  _elements;
    bool  _hasBounds;
    struct cf_ptr<CGImage *> { 
        struct CGImage {} *_p; 
    }  _image;
    unsigned long long  _imageCount;
    float  _imageScale;
    int  _lineCap;
    int  _lineJoin;
    float  _maxLineWidth;
    float  _miterLimit;
    bool  _rotatesImage;
    long long  _seed;
    int  _strokeType;
    struct vector<float, 0UL, unsigned long> { 
        float *_p; 
        unsigned long long _size; 
        unsigned long long _capacity; 
    }  _values;
}

@property (nonatomic) int blendMode;
@property (nonatomic, readonly) float borderWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) struct CGImage { }*image;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) float imageScale;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic, readonly) float maxLineWidth;
@property (nonatomic) float miterLimit;
@property (nonatomic) bool rotatesImage;
@property (nonatomic) long long seed;
@property (nonatomic) int strokeType;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addElement:(unsigned char)arg1 args:(const float*)arg2;
- (void)addPath:(struct CGPath { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)applyFunction:(int (*)arg1 info:(void*)arg2;
- (int)blendMode;
- (float)borderWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)commit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGImage { }*)image;
- (unsigned long long)imageCount;
- (float)imageScale;
- (id)init;
- (int)lineCap;
- (int)lineJoin;
- (float)maxLineWidth;
- (float)miterLimit;
- (void)removeAllElements;
- (bool)rotatesImage;
- (long long)seed;
- (void)setBlendMode:(int)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setImageCount:(unsigned long long)arg1;
- (void)setImageScale:(float)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setRotatesImage:(bool)arg1;
- (void)setSeed:(long long)arg1;
- (void)setStrokeType:(int)arg1;
- (int)strokeType;

@end
