
@interface BWInferenceEngineControllerInput : BWStillImageProcessorControllerInput {
    NSArray * _enabledInferenceMasks;
    unsigned long long  _enabledVisionInferences;
    bool  _expectsMoreData;
    struct opaqueCMSampleBuffer { } * _inferenceImage;
    unsigned long long  _inferenceInputBufferType;
    struct opaqueCMSampleBuffer { } * _propagationImage;
    bool  _smartCameraClassificationsEnabled;
}

@property (nonatomic, copy) NSArray *enabledInferenceMasks;
@property (nonatomic) unsigned long long enabledVisionInferences;
@property (nonatomic, readonly) bool expectsMoreData;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*inferenceImage;
@property (nonatomic, readonly) unsigned long long inferenceInputBufferType;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*propagationImage;
@property (nonatomic) bool smartCameraClassificationsEnabled;

- (void)addInferenceImage:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)addInferenceImage:(struct opaqueCMSampleBuffer { }*)arg1 propagationImage:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)dealloc;
- (id)description;
- (id)enabledInferenceMasks;
- (unsigned long long)enabledVisionInferences;
- (bool)expectsMoreData;
- (struct opaqueCMSampleBuffer { }*)inferenceImage;
- (unsigned long long)inferenceInputBufferType;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (id)initWithSettings:(id)arg1 portType:(id)arg2 inferenceInputBufferType:(unsigned long long)arg3;
- (struct opaqueCMSampleBuffer { }*)propagationImage;
- (void)setEnabledInferenceMasks:(id)arg1;
- (void)setEnabledVisionInferences:(unsigned long long)arg1;
- (void)setSmartCameraClassificationsEnabled:(bool)arg1;
- (bool)smartCameraClassificationsEnabled;

@end
