
@interface VCPGaborFilter : NSObject {
    struct Kernel {} ** _filterBanks;
    int  _num;
    int  _numOrientations;
    int  _numScales;
}

- (int)createGaborFilterKernel:(struct Kernel { float *x1; unsigned long long x2; unsigned long long x3; })arg1 sigmaX:(float)arg2 sigmaY:(float)arg3 lambda:(float)arg4 thetaInDegree:(float)arg5 phaseInDegree:(float)arg6;
- (void)dealloc;
- (id)initWithNumberOfScales:(int)arg1 numOfOrientations:(int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (int)processWithFilterScaleIdx:(int)arg1 orientIdx:(int)arg2 srcImage:(const float*)arg3 outImage:(float*)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;

@end
