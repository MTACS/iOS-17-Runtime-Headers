
@interface CSVADSignalExtractor : NSObject {
    <CSVADSignalExtractorDelegate> * _delegate;
    bool  _hasSpeechEverDetected;
    bool  _isSpeechDetected;
    unsigned long long  _lastSpeechStartSampleCount;
    NSMutableArray * _speechDetectedRanges;
}

@property (nonatomic) <CSVADSignalExtractorDelegate> *delegate;
@property (nonatomic, readonly) bool hasSpeechEverDetected;
@property (nonatomic) bool isSpeechDetected;
@property (nonatomic) unsigned long long lastSpeechStartSampleCount;
@property (nonatomic, retain) NSMutableArray *speechDetectedRanges;

- (void).cxx_destruct;
- (id)delegate;
- (bool)hasSpeechDetectedFromStartSampleCount:(unsigned long long)arg1 toEndSampleCount:(unsigned long long)arg2;
- (bool)hasSpeechEverDetected;
- (id)initWithToken:(id)arg1 delegate:(id)arg2;
- (bool)isSpeechDetected;
- (unsigned long long)lastSpeechStartSampleCount;
- (void)processBufferSampleWithIndex:(unsigned long long)arg1 startSampleCount:(unsigned long long)arg2 isSampleRepresentSpeech:(bool)arg3 vadToSpeechRatio:(unsigned long long)arg4;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setIsSpeechDetected:(bool)arg1;
- (void)setLastSpeechStartSampleCount:(unsigned long long)arg1;
- (void)setSpeechDetectedRanges:(id)arg1;
- (id)speechDetectedRanges;

@end
