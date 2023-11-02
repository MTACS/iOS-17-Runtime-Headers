
@interface BWUBProcessorRequest : NSObject {
    UBDeepFusionOutput * _deepFusionOutput;
    <BWUBProcessorControllerDelegate> * _delegate;
    bool  _deliveredDeferredProxyImage;
    int  _err;
    bool  _inferencesAvailable;
    BWUBProcessorInput * _input;
    float  _maxExposureTimesOfFramesAddedForMultiFrameProcessing;
    float  _minExposureTimesOfFramesAddedForMultiFrameProcessing;
    int  _numberOfFramesAddedForMultiFrameProcessing;
    UBFusionOutput * _output;
    bool  _processErrorRecoveryFrame;
    bool  _processOriginalImage;
    bool  _processSemanticRendering;
    bool  _provideInferenceInputImageForProcessing;
    float  _totalExposureTimesOfFramesAddedForMultiFrameProcessing;
}

@property (nonatomic, readonly) UBDeepFusionOutput *deepFusionOutput;
@property (nonatomic) bool deliveredDeferredProxyImage;
@property (nonatomic) int err;
@property (nonatomic, readonly) bool inferencesAvailable;
@property (nonatomic, readonly) BWUBProcessorInput *input;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic, readonly) UBFusionOutput *output;
@property (nonatomic, readonly) bool provideInferenceInputImageForProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;

- (void)dealloc;
- (id)deepFusionOutput;
- (bool)deliveredDeferredProxyImage;
- (id)description;
- (int)err;
- (bool)inferencesAvailable;
- (id)input;
- (float)maxExposureTimesOfFramesAddedForMultiFrameProcessing;
- (float)minExposureTimesOfFramesAddedForMultiFrameProcessing;
- (int)numberOfFramesAddedForMultiFrameProcessing;
- (id)output;
- (bool)provideInferenceInputImageForProcessing;
- (void)setDeliveredDeferredProxyImage:(bool)arg1;
- (void)setErr:(int)arg1;
- (void)setMaxExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (void)setMinExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (void)setNumberOfFramesAddedForMultiFrameProcessing:(int)arg1;
- (void)setTotalExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (float)totalExposureTimesOfFramesAddedForMultiFrameProcessing;

@end
