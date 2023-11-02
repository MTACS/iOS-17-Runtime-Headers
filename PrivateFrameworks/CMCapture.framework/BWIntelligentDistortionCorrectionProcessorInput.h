
@interface BWIntelligentDistortionCorrectionProcessorInput : BWStillImageProcessorControllerInput {
    bool  _applyZoom;
    <BWIntelligentDistortionCorrectionProcessorInputDelegate> * _delegate;
    struct opaqueCMSampleBuffer { } * _image;
    unsigned long long  _imageBufferType;
    bool  _imageSet;
    bool  _processGeometricDistortionCorrection;
    bool  _processIntelligentDistortionCorrection;
    bool  _receivedAllInputs;
}

@property (nonatomic) bool applyZoom;
@property (nonatomic, retain) <BWIntelligentDistortionCorrectionProcessorInputDelegate> *delegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*image;
@property (nonatomic, readonly) unsigned long long imageBufferType;
@property (nonatomic) bool processGeometricDistortionCorrection;
@property (nonatomic) bool processIntelligentDistortionCorrection;
@property (nonatomic) bool receivedAllInputs;

- (void)addImage:(struct opaqueCMSampleBuffer { }*)arg1 imageBufferType:(unsigned long long)arg2;
- (bool)applyZoom;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct opaqueCMSampleBuffer { }*)image;
- (unsigned long long)imageBufferType;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (bool)processGeometricDistortionCorrection;
- (bool)processIntelligentDistortionCorrection;
- (bool)receivedAllInputs;
- (void)setApplyZoom:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProcessGeometricDistortionCorrection:(bool)arg1;
- (void)setProcessIntelligentDistortionCorrection:(bool)arg1;
- (void)setReceivedAllInputs:(bool)arg1;

@end
