
@interface PICurvesLUTFilter : CIFilter {
    NSArray * _inputPointsB;
    NSArray * _inputPointsG;
    NSArray * _inputPointsL;
    NSArray * _inputPointsR;
}

@property (retain) NSArray *inputPointsB;
@property (retain) NSArray *inputPointsG;
@property (retain) NSArray *inputPointsL;
@property (retain) NSArray *inputPointsR;

+ (struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })calculateCurveTable:(id)arg1;
+ (id)curvePointsFromDictionaries:(id)arg1;
+ (id)tableImageFromRed:(const float*)arg1 green:(const float*)arg2 blue:(const float*)arg3 luminance:(const float*)arg4;

- (void).cxx_destruct;
- (id)inputPointsB;
- (id)inputPointsG;
- (id)inputPointsL;
- (id)inputPointsR;
- (id)outputImage;
- (void)setInputPointsB:(id)arg1;
- (void)setInputPointsG:(id)arg1;
- (void)setInputPointsL:(id)arg1;
- (void)setInputPointsR:(id)arg1;

@end
