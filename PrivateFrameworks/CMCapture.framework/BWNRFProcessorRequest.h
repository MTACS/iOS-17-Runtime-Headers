
@interface BWNRFProcessorRequest : NSObject {
    int  _clientBracketSequenceNumber;
    NRFDeepFusionOutput * _deepFusionOutput;
    <BWNRFProcessorControllerDelegate> * _delegate;
    bool  _deliveredAdaptiveBracketingErrorRecoveryFrame;
    bool  _deliveredDeferredProxyImage;
    int  _demosaicedRawErr;
    int  _err;
    bool  _gainMapEnabled;
    bool  _inferencesAvailable;
    BWNRFProcessorInput * _input;
    float  _maxExposureTimesOfFramesAddedForMultiFrameProcessing;
    float  _minExposureTimesOfFramesAddedForMultiFrameProcessing;
    int  _numberOfFramesAddedForMultiFrameProcessing;
    NRFUBFusionOutput * _output;
    bool  _processErrorRecoveryFrame;
    bool  _processInferenceInputImage;
    bool  _processOriginalImage;
    bool  _processSemanticRendering;
    bool  _processToneMapping;
    bool  _provideInferenceInputImageForProcessing;
    NRFRawNightModeOutputFrame * _rawNightModeOutputFrame;
    float  _totalExposureTimesOfFramesAddedForMultiFrameProcessing;
}

@property (nonatomic, readonly) NRFDeepFusionOutput *deepFusionOutput;
@property (nonatomic) bool deliveredAdaptiveBracketingErrorRecoveryFrame;
@property (nonatomic) bool deliveredDeferredProxyImage;
@property (nonatomic) int demosaicedRawErr;
@property (nonatomic) int err;
@property (nonatomic) bool gainMapEnabled;
@property (nonatomic, readonly) bool inferencesAvailable;
@property (nonatomic, readonly) BWNRFProcessorInput *input;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic, readonly) NRFUBFusionOutput *output;
@property (nonatomic, readonly) bool processSemanticRendering;
@property (nonatomic, readonly) bool provideInferenceInputImageForProcessing;
@property (nonatomic, readonly) NRFRawNightModeOutputFrame *rawNightModeOutputFrame;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;

- (void)dealloc;
- (id)deepFusionOutput;
- (bool)deliveredAdaptiveBracketingErrorRecoveryFrame;
- (bool)deliveredDeferredProxyImage;
- (int)demosaicedRawErr;
- (id)description;
- (int)err;
- (bool)gainMapEnabled;
- (bool)inferencesAvailable;
- (id)input;
- (float)maxExposureTimesOfFramesAddedForMultiFrameProcessing;
- (float)minExposureTimesOfFramesAddedForMultiFrameProcessing;
- (int)numberOfFramesAddedForMultiFrameProcessing;
- (id)output;
- (bool)processSemanticRendering;
- (bool)provideInferenceInputImageForProcessing;
- (id)rawNightModeOutputFrame;
- (void)setDeliveredAdaptiveBracketingErrorRecoveryFrame:(bool)arg1;
- (void)setDeliveredDeferredProxyImage:(bool)arg1;
- (void)setDemosaicedRawErr:(int)arg1;
- (void)setErr:(int)arg1;
- (void)setGainMapEnabled:(bool)arg1;
- (void)setMaxExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (void)setMinExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (void)setNumberOfFramesAddedForMultiFrameProcessing:(int)arg1;
- (void)setTotalExposureTimesOfFramesAddedForMultiFrameProcessing:(float)arg1;
- (float)totalExposureTimesOfFramesAddedForMultiFrameProcessing;

@end
