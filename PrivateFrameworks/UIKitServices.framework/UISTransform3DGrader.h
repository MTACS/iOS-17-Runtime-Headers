
@interface UISTransform3DGrader : NSObject {
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _allowedRotations;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _allowedScales;
    double  _allowedShear;
    double  _allowedShift;
    double  _allowedTranslation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct _UISTransform3DGrade { unsigned long long x1; struct CGVector { double x_2_1_1; double x_2_1_2; } x2; })_gradeTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)allowRotations:(const double*)arg1 count:(unsigned long long)arg2;
- (void)allowRotations:(const double*)arg1 count:(unsigned long long)arg2 lowerMultiplier:(double)arg3 lowerConstant:(double)arg4 upperMultiplier:(double)arg5 upperConstant:(double)arg6;
- (void)allowScales:(const double*)arg1 count:(unsigned long long)arg2;
- (void)allowScales:(const double*)arg1 count:(unsigned long long)arg2 lowerMultiplier:(double)arg3 lowerConstant:(double)arg4 upperMultiplier:(double)arg5 upperConstant:(double)arg6;
- (void)allowShear:(double)arg1;
- (void)allowShift:(double)arg1;
- (void)allowTranslation:(double)arg1;
- (unsigned long long)gradeStartTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 endTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2;
- (unsigned long long)gradeTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (id)init;

@end
