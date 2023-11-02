
@interface BWInferenceEngineControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    NSArray * _enabledInferenceMasks;
    unsigned long long  _enabledVisionInferences;
    bool  _fastMattingEnabled;
    BWVideoFormat * _inputFormat;
    bool  _mattingOutputValidContentDetectionEnabled;
    int  _personSemanticsVersion;
    bool  _smartCameraClassificationsEnabled;
    NSArray * _swfrInferenceMasks;
}

@property (nonatomic, copy) NSArray *enabledInferenceMasks;
@property (nonatomic) unsigned long long enabledVisionInferences;
@property (nonatomic) bool fastMattingEnabled;
@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic) bool mattingOutputValidContentDetectionEnabled;
@property (nonatomic) int personSemanticsVersion;
@property (nonatomic) bool smartCameraClassificationsEnabled;
@property (nonatomic, copy) NSArray *swfrInferenceMasks;

- (void)dealloc;
- (id)enabledInferenceMasks;
- (unsigned long long)enabledVisionInferences;
- (bool)fastMattingEnabled;
- (id)init;
- (id)inputFormat;
- (bool)mattingOutputValidContentDetectionEnabled;
- (int)personSemanticsVersion;
- (void)setEnabledInferenceMasks:(id)arg1;
- (void)setEnabledVisionInferences:(unsigned long long)arg1;
- (void)setFastMattingEnabled:(bool)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setMattingOutputValidContentDetectionEnabled:(bool)arg1;
- (void)setPersonSemanticsVersion:(int)arg1;
- (void)setSmartCameraClassificationsEnabled:(bool)arg1;
- (void)setSwfrInferenceMasks:(id)arg1;
- (bool)smartCameraClassificationsEnabled;
- (id)swfrInferenceMasks;

@end
