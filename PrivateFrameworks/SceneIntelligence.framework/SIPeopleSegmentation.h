
@interface SIPeopleSegmentation : SIModel {
    int  _frameCount;
    struct __CVBuffer { } * _temporalBuffer;
    unsigned char  snapEveryFrameCount;
}

@property (nonatomic) unsigned char snapEveryFrameCount;

+ (struct CGSize { double x1; double x2; })getInputResolution;
+ (struct CGSize { double x1; double x2; })getOutputResolution;

- (bool)_initTemporalBuffer;
- (long long)copyResultsToData:(id)arg1;
- (void)dealloc;
- (long long)evaluateForInput:(id)arg1 output:(id)arg2;
- (long long)evaluateForInput:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (struct CGSize { double x1; double x2; })getInputResolution;
- (struct CGSize { double x1; double x2; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)arg1;
- (void)setSnapEveryFrameCount:(unsigned char)arg1;
- (unsigned char)snapEveryFrameCount;
- (bool)switchNetworkConfiguration:(long long)arg1;

@end
