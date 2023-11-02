
@interface LKTOpticalFlow : NSObject {
    int  _height;
    bool  _isValid;
    int  _levelCount;
    int  _nlreg_padding;
    int  _nlreg_radius;
    float  _nlreg_sigma_c;
    float  _nlreg_sigma_l;
    float  _nlreg_sigma_w;
    int  _numScales;
    int  _numWarpings;
    unsigned int  _outputPixelFormat;
    bool  _useNonLocalRegularization;
    int  _width;
}

@property (nonatomic, readonly) int height;
@property (nonatomic) bool isValid;
@property (nonatomic, readonly) int levelCount;
@property (nonatomic) int nlreg_padding;
@property (nonatomic) int nlreg_radius;
@property (nonatomic) float nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_w;
@property (nonatomic, readonly) int numScales;
@property (nonatomic) int numWarpings;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) bool useNonLocalRegularization;
@property (nonatomic, readonly) int width;

- (bool)_validateInputImage:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (bool)_validateOutputImage:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (bool)estimateFlowFromReference:(struct __CVBuffer { }*)arg1 target:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)estimateFlowStream:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (int)height;
- (id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3;
- (bool)isValid;
- (int)levelCount;
- (int)nlreg_padding;
- (int)nlreg_radius;
- (float)nlreg_sigma_c;
- (float)nlreg_sigma_l;
- (float)nlreg_sigma_w;
- (int)numScales;
- (int)numWarpings;
- (unsigned int)outputPixelFormat;
- (void)setIsValid:(bool)arg1;
- (void)setNlreg_padding:(int)arg1;
- (void)setNlreg_radius:(int)arg1;
- (void)setNlreg_sigma_c:(float)arg1;
- (void)setNlreg_sigma_l:(float)arg1;
- (void)setNlreg_sigma_w:(float)arg1;
- (void)setNumWarpings:(int)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (bool)setOutputUV:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (void)setUseNonLocalRegularization:(bool)arg1;
- (bool)useNonLocalRegularization;
- (void)waitUntilCompleted;
- (int)width;

@end
