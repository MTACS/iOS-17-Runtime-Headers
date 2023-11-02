
@interface CSVTSecondPassLatencyMetrics : NSObject {
    unsigned long long  _secondPassAssetLoadCompleteTime;
    unsigned long long  _secondPassAssetLoadStartTime;
    unsigned long long  _secondPassAssetQueryCompleteTime;
    unsigned long long  _secondPassAssetQueryStartTime;
    unsigned long long  _secondPassAudioStreamReadyTime;
    unsigned long long  _secondPassAudioStreamStartTime;
    unsigned long long  _secondPassCheckerModelKeywordDetectionEndTime;
    unsigned long long  _secondPassCheckerModelKeywordDetectionStartTime;
    unsigned long long  _secondPassFirstAudioPacketReceptionTime;
    unsigned long long  _secondPassLastAudioPacketReceptionTime;
}

@property (nonatomic) unsigned long long secondPassAssetLoadCompleteTime;
@property (nonatomic) unsigned long long secondPassAssetLoadStartTime;
@property (nonatomic) unsigned long long secondPassAssetQueryCompleteTime;
@property (nonatomic) unsigned long long secondPassAssetQueryStartTime;
@property (nonatomic) unsigned long long secondPassAudioStreamReadyTime;
@property (nonatomic) unsigned long long secondPassAudioStreamStartTime;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionEndTime;
@property (nonatomic) unsigned long long secondPassCheckerModelKeywordDetectionStartTime;
@property (nonatomic) unsigned long long secondPassFirstAudioPacketReceptionTime;
@property (nonatomic) unsigned long long secondPassLastAudioPacketReceptionTime;

- (unsigned long long)secondPassAssetLoadCompleteTime;
- (unsigned long long)secondPassAssetLoadStartTime;
- (unsigned long long)secondPassAssetQueryCompleteTime;
- (unsigned long long)secondPassAssetQueryStartTime;
- (unsigned long long)secondPassAudioStreamReadyTime;
- (unsigned long long)secondPassAudioStreamStartTime;
- (unsigned long long)secondPassCheckerModelKeywordDetectionEndTime;
- (unsigned long long)secondPassCheckerModelKeywordDetectionStartTime;
- (unsigned long long)secondPassFirstAudioPacketReceptionTime;
- (unsigned long long)secondPassLastAudioPacketReceptionTime;
- (void)setSecondPassAssetLoadCompleteTime:(unsigned long long)arg1;
- (void)setSecondPassAssetLoadStartTime:(unsigned long long)arg1;
- (void)setSecondPassAssetQueryCompleteTime:(unsigned long long)arg1;
- (void)setSecondPassAssetQueryStartTime:(unsigned long long)arg1;
- (void)setSecondPassAudioStreamReadyTime:(unsigned long long)arg1;
- (void)setSecondPassAudioStreamStartTime:(unsigned long long)arg1;
- (void)setSecondPassCheckerModelKeywordDetectionEndTime:(unsigned long long)arg1;
- (void)setSecondPassCheckerModelKeywordDetectionStartTime:(unsigned long long)arg1;
- (void)setSecondPassFirstAudioPacketReceptionTime:(unsigned long long)arg1;
- (void)setSecondPassLastAudioPacketReceptionTime:(unsigned long long)arg1;

@end
