
@interface BWSceneClassifierSinkNode : BWSinkNode {
    BWFigVideoCaptureDevice * _device;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _expectedVersion;
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
    }  _foodScene;
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
    }  _indoorScene;
    int  _maxDebugOverlaySceneCount;
    BWInferenceResult * _mostRecentSmartCameraResult;
    <BWMRCSceneObserver> * _mrcSceneObserver;
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
    }  _outdoorScene;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultLock;
    bool  _semanticStyleSceneDetectionEnabled;
    <BWSemanticStyleSceneObserver> * _semanticStyleSceneObserver;
    int  _semanticStyleSceneType;
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
    }  _sunsetScene;
}

@property (setter=setMRCSceneObserver:, nonatomic) <BWMRCSceneObserver> *mrcSceneObserver;
@property (readonly) NSArray *sceneConfidences;
@property (nonatomic) <BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;

+ (void)initialize;

- (id)confidenceStringForScene:(id)arg1;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)initWithCaptureDevice:(id)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 semanticStyleSceneDetectionEnabled:(bool)arg3 sinkID:(id)arg4;
- (id)mrcSceneObserver;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sceneConfidences;
- (id)semanticStyleSceneObserver;
- (void)setMRCSceneObserver:(id)arg1;
- (void)setSemanticStyleSceneObserver:(id)arg1;

@end
