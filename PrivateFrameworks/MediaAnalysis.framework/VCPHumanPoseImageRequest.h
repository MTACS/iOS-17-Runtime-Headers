
@interface VCPHumanPoseImageRequest : VCPRequest {
    VCPImageHumanPoseAnalyzer * _analyzer;
    unsigned int  _preferredFormat;
    int  _preferredHeight;
    int  _preferredWidth;
}

+ (int)parseResults:(id)arg1 observations:(id)arg2;

- (void).cxx_destruct;
- (bool)cleanupWithOptions:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned int)preferredPixelFormat;
- (id)processImage:(struct __CVBuffer { }*)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)updateWithOptions:(id)arg1 error:(id*)arg2;

@end
