
@interface BWNondisruptiveSwitchingFormatSelector : NSObject {
    float  _baseZoomFactor;
    int  _lastDigitalFlashMode;
    int  _lastNondisruptiveSwitchingFormatIndex;
    NSString * _lastQuadraSubPixelSwitchingIntent;
    bool  _lastStationary;
    float  _lastZoomFactor;
    int  _mainFormatSIFRBinningFactor;
    NSString * _portType;
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
    }  _quadraSubPixelSceneBasedOnLuxLevel;
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
    }  _quadraSubPixelSceneBasedOnNormalizedSNR;
    bool  _quadraSubPixelSceneMonitoringForActionCameraEnabled;
    bool  _quadraSubPixelSceneMonitoringForDigitalFlashEnabled;
    NSDictionary * _quadraSubPixelSwitchingParameters;
    int  _videoStabilizationStrength;
    NSDictionary * _zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned;
    NSDictionary * _zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned;
}

+ (void)initialize;

- (void)dealloc;
- (int)formatIndexForZoomFactor:(float)arg1 frameStatistics:(id)arg2 stillImageDigitalFlashMode:(int)arg3 isStationary:(bool)arg4 isSlave:(bool)arg5 binnedSIFROnSlaveAllowed:(bool)arg6;
- (id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 baseZoomFactor:(float)arg3 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned:(id)arg4 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned:(id)arg5 mainFormatSIFRBinningFactor:(int)arg6;
- (void)setVideoStabilizationStrength:(int)arg1;

@end
