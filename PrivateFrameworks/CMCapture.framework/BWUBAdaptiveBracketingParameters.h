
@interface BWUBAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters> {
    NSArray * _adaptiveBracketingFrameParameters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _adaptiveBracketingFrameParametersLock;
    UBProgressiveBracketingStatistics * _lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
    UBProgressiveBracketingParameters * _progressiveBracketingParameters;
    Class  _progressiveBracketingStatisticsClass;
    bool  _stopAdaptiveBracketing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)adaptiveBracketingFrameParametersForGroup:(int)arg1;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 sphereOffsetEnabled:(bool)arg2;
- (void)dealloc;
- (float)evZeroTargetGain;
- (bool)generateWhiteBalanceParameters;
- (float)previewSNR;
- (bool)stationary;
- (double)totalIntegrationTime;
- (double)totalIntegrationTimeForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(bool)arg3 detectedObjects:(id)arg4;

@end
