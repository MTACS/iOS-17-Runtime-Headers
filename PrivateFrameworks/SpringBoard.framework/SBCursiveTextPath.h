
@interface SBCursiveTextPath : NSObject {
    double  _ascender;
    struct vector<std::vector<BezierCurve>, std::allocator<std::vector<BezierCurve>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<BezierCurve> *, std::allocator<std::vector<BezierCurve>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _bezierArrays;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBoxOfPath;
    double  _descender;
    double  _duration;
    double  _finalWeight;
    double  _initialWeight;
    double  _length;
    double  _rampTime;
    long long  _resolution;
    double  _unitsPerM;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 resolution:(long long)arg2;
- (struct CGPath { }*)pathForFraction:(double)arg1 calculateLength:(bool)arg2;
- (struct CGPath { }*)pathForTime:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pointSize:(double)arg2 flipped:(bool)arg3;

@end
