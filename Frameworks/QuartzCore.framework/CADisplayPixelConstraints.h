
@interface CADisplayPixelConstraints : NSObject <CAPixelConstraints> {
    float * _apl;
    unsigned long long  _n;
    float * _nits;
    float  _weights;
}

@property (nonatomic, readonly) const float*averagePixelTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const float*nitsTable;
@property (nonatomic, readonly) const float*rgbWeights;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tableSize;

- (const float*)averagePixelTable;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithConstraints:(const struct AveragePixelConstraints { float *x1; float *x2; float x3[3]; unsigned long long x4; float x5; float x6; }*)arg1;
- (const float*)nitsTable;
- (const float*)rgbWeights;
- (unsigned long long)tableSize;

@end
