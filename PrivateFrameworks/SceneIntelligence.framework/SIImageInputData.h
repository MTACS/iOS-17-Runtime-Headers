
@interface SIImageInputData : NSObject <SIData> {
    NSString * _identifier;
    SIPixelBufferWrapper * _inputDepthBufferWrapper;
    SIPixelBufferWrapper * _inputImageBufferWrapper;
    int  _inputImageLuxValue;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _inputPose;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) struct __CVBuffer { }*inputDepthBuffer;
@property (nonatomic) struct __CVBuffer { }*inputImageBuffer;
@property (nonatomic) int inputImageLuxValue;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } inputPose;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (bool)copyDataTo:(id)arg1;
- (id)identifier;
- (id)init;
- (struct __CVBuffer { }*)inputDepthBuffer;
- (struct __CVBuffer { }*)inputImageBuffer;
- (int)inputImageLuxValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })inputPose;
- (void)setIdentifier:(id)arg1;
- (void)setInputDepthBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputImageBuffer:(struct __CVBuffer { }*)arg1;
- (void)setInputImageLuxValue:(int)arg1;
- (void)setInputPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
