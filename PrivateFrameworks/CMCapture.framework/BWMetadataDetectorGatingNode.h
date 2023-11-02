
@interface BWMetadataDetectorGatingNode : BWFanOutNode <BWMRCSceneObserver> {
    BWNodeOutput * _appClipCodeOutput;
    BWMetadataDetectorGatingOutputController * _appClipCodeOutputController;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _appClipCodeScene;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _appClipCodeSceneWithQRCodes;
    NSObject<OS_dispatch_group> * _detectorsAvailableGroup;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _documentScene;
    bool  _lowPowerModeEnabled;
    BWNodeOutput * _mrcOutput;
    BWMetadataDetectorGatingOutputController * _mrcOutputController;
    bool  _needsSynchronization;
    BWPixelBufferPool * _outputBufferPool;
    struct { 
        int width; 
        int height; 
    }  _outputBufferPoolDimensions;
    NSMutableArray * _outputControllers;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _qrCodeScene;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _qrCodeSceneForAppClipCode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sceneLock;
    BWSceneStabilityMonitor * _sceneStabilityMonitor;
    BWNodeOutput * _textLocalizationOutput;
    BWMetadataDetectorGatingOutputController * _textLocalizationOutputController;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        short confidenceHysteresisTemporalLagBeforeConfident; 
        short confidenceHysteresisTemporalLagBeforeNotConfident; 
        short currentTemporalHysteresis; 
        bool resetTemporalHysteresisAndFilteringOnNextUpdate; 
        char *name; 
    }  _textScene;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

@property (nonatomic, readonly) BWNodeOutput *appClipCodeOutput;
@property (nonatomic, readonly) <BWMetadataDetectedResultsObserver> *appClipCodeResultsObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeOutput *mrcOutput;
@property (nonatomic, readonly) <BWMetadataDetectedResultsObserver> *mrcResultsObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BWNodeOutput *textLocalizationOutput;
@property (nonatomic, readonly) <BWMetadataDetectedResultsObserver> *textLocalizationResultsObserver;

+ (void)initialize;

- (id)appClipCodeOutput;
- (id)appClipCodeResultsObserver;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithMRCEnabled:(bool)arg1 appClipCodeEnabled:(bool)arg2 textLocalizationEnabled:(bool)arg3 lowPowerModeEnabled:(bool)arg4;
- (id)initWithSceneClassifierVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1 mrcEnabled:(bool)arg2 appClipCodeEnabled:(bool)arg3 textLocalizationEnabled:(bool)arg4 lowPowerModeEnabled:(bool)arg5;
- (id)mrcOutput;
- (id)mrcResultsObserver;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)sceneDidChangeQRConfidence:(float)arg1 appClipCodeConfidence:(float)arg2 documentConfidence:(float)arg3 textConfidence:(float)arg4;
- (id)textLocalizationOutput;
- (id)textLocalizationResultsObserver;

@end
