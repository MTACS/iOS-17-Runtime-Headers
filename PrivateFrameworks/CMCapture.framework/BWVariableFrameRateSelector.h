
@interface BWVariableFrameRateSelector : NSObject {
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
    }  _aeLimits;
    bool  _deviceMotionEnabled;
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
    }  _deviceMotionInHighLight;
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
    }  _deviceMotionInLowLight;
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
    }  _flickerDetected;
    bool  _frameRateConversionInVISNodeEnabled;
    int  _frameRateConversionStatus;
    int  _globalMotionAE;
    NSMutableDictionary * _highLightSceneMotionThresholdsByPortType;
    float  _integrationTimeFrom30BackTo60;
    float  _integrationTimeFrom30To24;
    float  _integrationTimeFrom60To30;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastQuaternion;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastQuaternionDiff;
    bool  _lastStabilityFlag;
    NSMutableDictionary * _lowLightSceneMotionThresholdsByPortType;
    int  _mode;
    BWInferenceResult * _mostRecentInferenceResult;
    float  _previousEITForAELimitsReached;
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
    }  _sceneMotionAEInHighLight;
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
    }  _sceneMotionAEInLowLight;
    bool  _sceneMotionEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _smartCameraLock;
    struct { 
        int reason; 
        int mode; 
        float fromFR; 
        float toFR; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        bool isSceneStable; 
        bool aeLimitsReached; 
        bool waterSceneDetected; 
        int currentFrameRate; 
    }  _state;
    float  _suggestedFrameRate;
    bool  _testRun;
    NSMutableDictionary * _variableFrameRateInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _variableFrameRateInfoLock;
    NSMutableDictionary * _vfrAEMaxGainsByPortType;
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
    }  _waterSceneDetected;
    bool  _zoomInProgress;
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
    }  _zoomRequest;
}

@property (nonatomic, readonly) float suggestedFrameRate;

+ (void)initialize;

- (void)addAttachmentsToSamplebuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (float)getAEMaxGainForPortType:(id)arg1 suggestedFrameRate:(double)arg2;
- (id)initWithPortTypes:(id)arg1 forParameters:(id)arg2 frameRateSwitchBasedOnMotionDisabled:(bool)arg3;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(id)arg2 currentFrameRate:(float)arg3 aeMaxGain:(float)arg4 zoomInProgress:(bool)arg5 mostRecentInferenceResult:(id)arg6;
- (float)suggestedFrameRate;

@end
