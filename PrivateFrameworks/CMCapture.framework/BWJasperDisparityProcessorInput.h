
@interface BWJasperDisparityProcessorInput : BWStillImageProcessorControllerInput {
    struct opaqueCMSampleBuffer { } * _colorBuffer;
    double  _colorBufferExposureTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _colorBufferPTS;
    unsigned long long  _colorBufferType;
    <BWJasperDisparityProcessorInputDelegate> * _delegate;
    bool  _skipProcessing;
}

@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*colorBuffer;
@property (nonatomic, readonly) unsigned long long colorBufferType;
@property (nonatomic, retain) <BWJasperDisparityProcessorInputDelegate> *delegate;
@property (getter=isReadyToExecute, nonatomic, readonly) bool readyToExecute;
@property (nonatomic) bool skipProcessing;

- (struct opaqueCMSampleBuffer { }*)colorBuffer;
- (unsigned long long)colorBufferType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)executeNow;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (bool)isReadyToExecute;
- (void)setColorBuffer:(struct opaqueCMSampleBuffer { }*)arg1 type:(unsigned long long)arg2;
- (void)setColorBufferPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 exposureTime:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSkipProcessing:(bool)arg1;
- (bool)skipProcessing;

@end
