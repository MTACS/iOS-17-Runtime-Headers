
@interface BWRedEyeReductionControllerInput : BWStillImageProcessorControllerInput {
    struct opaqueCMSampleBuffer { } * _auxImage;
    NSArray * _faceObservations;
    <BWRedEyeReductionControllerInputDelegate> * _inputDelegate;
    struct opaqueCMSampleBuffer { } * _primaryImage;
    <BWStillImageProcessorControllerDelegate> * _processorControllerDelegate;
    bool  _requiresSensorInterfaceRawPropagation;
}

@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*auxImage;
@property (nonatomic, readonly) NSArray *faceObservations;
@property (nonatomic, retain) <BWRedEyeReductionControllerInputDelegate> *inputDelegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*primaryImage;
@property (nonatomic, retain) <BWStillImageProcessorControllerDelegate> *processorControllerDelegate;
@property (nonatomic) bool requiresSensorInterfaceRawPropagation;

+ (bool)requiresInferencesFromFrame:(struct opaqueCMSampleBuffer { }*)arg1;

- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1 faceObservations:(id)arg2;
- (struct opaqueCMSampleBuffer { }*)auxImage;
- (void)dealloc;
- (id)faceObservations;
- (id)inputDelegate;
- (struct opaqueCMSampleBuffer { }*)primaryImage;
- (id)processorControllerDelegate;
- (bool)requiresSensorInterfaceRawPropagation;
- (void)setInputDelegate:(id)arg1;
- (void)setProcessorControllerDelegate:(id)arg1;
- (void)setRequiresSensorInterfaceRawPropagation:(bool)arg1;

@end
