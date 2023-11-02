
@interface CSVoiceTriggerFirstPassConfig : NSObject {
    NSString * _configPathNDAPI;
    float  _delaySecondsForChannelSelection;
    float  _masterChannelScoreBoost;
    unsigned long long  _processingChannelsBitset;
    float  _processingChunkSeconds;
    float  _threshold;
}

@property (nonatomic, readonly) NSString *configPathNDAPI;
@property (nonatomic, readonly) float delaySecondsForChannelSelection;
@property (nonatomic, readonly) float masterChannelScoreBoost;
@property (nonatomic, readonly) unsigned long long processingChannelsBitset;
@property (nonatomic, readonly) float processingChunkSeconds;
@property (nonatomic, readonly) float threshold;

- (void).cxx_destruct;
- (id)configPathNDAPI;
- (float)delaySecondsForChannelSelection;
- (id)initWithConfigPathNDAPI:(id)arg1 threshold:(float)arg2 delaySecondsForChannelSelection:(float)arg3 masterChannelScoreBoost:(float)arg4 processingChunkSeconds:(float)arg5 processingChannelsBitset:(unsigned long long)arg6;
- (float)masterChannelScoreBoost;
- (unsigned long long)processingChannelsBitset;
- (float)processingChunkSeconds;
- (float)threshold;

@end
