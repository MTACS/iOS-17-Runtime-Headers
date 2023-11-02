
@interface CSVoiceTriggerSecondPassConfig : NSObject {
    NSString * _configPathNDAPI;
    NSString * _configPathRecognizer;
    NSArray * _phraseConfigs;
    float  _preTriggerAudioTime;
    float  _prependingAudioTime;
    NSNumber * _quasarCheckerResultCutOffCount;
    NSString * _resourcePath;
    float  _trailingAudioTime;
    bool  _useKeywordSpotting;
    bool  _useRecognizerCombination;
    bool  _useTimeBasedTriggerLength;
    CSVoiceTriggerAirPodWearerDetectionConfig * _wearerDetectionConfig;
}

@property (nonatomic, readonly) NSString *configPathNDAPI;
@property (nonatomic, readonly) NSString *configPathRecognizer;
@property (nonatomic, readonly) NSArray *phraseConfigs;
@property (nonatomic, readonly) float preTriggerAudioTime;
@property (nonatomic, readonly) float prependingAudioTime;
@property (nonatomic, readonly) NSNumber *quasarCheckerResultCutOffCount;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) float trailingAudioTime;
@property (nonatomic, readonly) bool useKeywordSpotting;
@property (nonatomic, readonly) bool useRecognizerCombination;
@property (nonatomic, readonly) bool useTimeBasedTriggerLength;
@property (nonatomic, readonly) CSVoiceTriggerAirPodWearerDetectionConfig *wearerDetectionConfig;

- (void).cxx_destruct;
- (id)configPathNDAPI;
- (id)configPathRecognizer;
- (id)initWithPreTriggerAudioTime:(float)arg1 prependingAudioTime:(float)arg2 trailingAudioTime:(float)arg3 resourcePath:(id)arg4 configPathNDAPI:(id)arg5 useRecognizerCombination:(bool)arg6 configPathRecognizer:(id)arg7 useKeywordSpotting:(bool)arg8 phraseConfigs:(id)arg9 wearerDetectionConfig:(id)arg10 quasarCheckerResultCutOffCount:(id)arg11 useTimeBasedTriggerLength:(bool)arg12;
- (id)phraseConfigs;
- (float)preTriggerAudioTime;
- (float)prependingAudioTime;
- (id)quasarCheckerResultCutOffCount;
- (id)resourcePath;
- (float)trailingAudioTime;
- (bool)useKeywordSpotting;
- (bool)useRecognizerCombination;
- (bool)useTimeBasedTriggerLength;
- (id)wearerDetectionConfig;

@end
