
@interface CUIVectorGlyphMutator : NSObject {
    struct { 
        double *deltaComponents; 
        unsigned long long numDeltas; 
    }  _blackDeltas;
    struct CGPath { } * _originPath;
    struct { 
        double *pointComponents; 
        unsigned long long numPoints; 
    }  _originPoints;
    double  _pointSize;
    struct { 
        double *deltaComponents; 
        unsigned long long numDeltas; 
    }  _ultralightDeltas;
}

@property (nonatomic) struct { double *x1; unsigned long long x2; } blackDeltas;
@property (nonatomic) struct CGPath { }*originPath;
@property (nonatomic) struct { double *x1; unsigned long long x2; } originPoints;
@property (nonatomic) double pointSize;
@property (nonatomic) struct { double *x1; unsigned long long x2; } ultralightDeltas;

+ (struct { double *x1; unsigned long long x2; })deltaArrayFrom:(struct { double *x1; unsigned long long x2; })arg1 to:(struct { double *x1; unsigned long long x2; })arg2;
+ (struct { double *x1; unsigned long long x2; })pointArrayFromPath:(struct CGPath { }*)arg1;
+ (double*)realloc_cgfloat_array:(double*)arg1 withNewCount:(unsigned long long)arg2;
+ (struct { double x1; double x2; })scalarsForGlyphWeight:(long long)arg1 glyphSize:(long long)arg2;
+ (struct { double x1; double x2; })transformForGlyphSize:(long long)arg1;

- (struct { double *x1; unsigned long long x2; })applyDeltasWithScalars:(struct { double x1; double x2; })arg1;
- (struct { double *x1; unsigned long long x2; })applyDeltasWithScalars:(struct { double x1; double x2; })arg1 andTransform:(struct { double x1; double x2; })arg2;
- (struct { double *x1; unsigned long long x2; })blackDeltas;
- (struct CGPath { }*)cgPathFrom:(struct { double *x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)initWithPointSize:(double)arg1 regular:(struct CGPath { }*)arg2 ultralight:(struct CGPath { }*)arg3 black:(struct CGPath { }*)arg4;
- (struct CGPath { }*)originPath;
- (struct { double *x1; unsigned long long x2; })originPoints;
- (struct CGPath { }*)pathForScalars:(struct { double x1; double x2; })arg1;
- (struct CGPath { }*)pathForScalars:(struct { double x1; double x2; })arg1 andTransform:(struct { double x1; double x2; })arg2;
- (double)pointSize;
- (void)setBlackDeltas:(struct { double *x1; unsigned long long x2; })arg1;
- (void)setOriginPath:(struct CGPath { }*)arg1;
- (void)setOriginPoints:(struct { double *x1; unsigned long long x2; })arg1;
- (void)setPointSize:(double)arg1;
- (void)setUltralightDeltas:(struct { double *x1; unsigned long long x2; })arg1;
- (struct { double *x1; unsigned long long x2; })ultralightDeltas;

@end
