
@interface VCPHandPoseVideoRequest : VCPRequest {
    VCPImageHandsAnalyzer * _analyzer;
    NSArray * _existingHands;
    int  _handID;
    unsigned int  _preferredFormat;
    int  _preferredHeight;
    int  _preferredWidth;
}

- (void).cxx_destruct;
- (int)associateHands:(id)arg1 withExisingHands:(id)arg2;
- (bool)cleanupWithOptions:(id)arg1 error:(id*)arg2;
- (float)handDistance:(id)arg1 withhandB:(id)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned int)preferredPixelFormat;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
