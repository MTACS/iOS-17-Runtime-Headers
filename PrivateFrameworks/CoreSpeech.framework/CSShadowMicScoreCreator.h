
@interface CSShadowMicScoreCreator : NSObject {
    NSMutableData * _audioBuffer;
    unsigned long long  _bestEarlyDetectSample;
    unsigned long long  _bestEndDetectSample;
    unsigned long long  _bestStartDetectSample;
    long long  _numberOfTotalFramesETFT;
    unsigned long long  _numberOfVoicingFrames;
    NSMutableArray * _rmsSamplesForEntireAudio;
    double  _shadowMicScore;
    double  _speechVoiceLevel;
}

@property (nonatomic, retain) NSMutableData *audioBuffer;
@property (nonatomic) unsigned long long bestEarlyDetectSample;
@property (nonatomic) unsigned long long bestEndDetectSample;
@property (nonatomic) unsigned long long bestStartDetectSample;
@property (nonatomic) long long numberOfTotalFramesETFT;
@property (nonatomic) unsigned long long numberOfVoicingFrames;
@property (nonatomic, retain) NSMutableArray *rmsSamplesForEntireAudio;
@property (nonatomic) double shadowMicScore;
@property (nonatomic) double speechVoiceLevel;

- (void).cxx_destruct;
- (void)_calculateNumberOfVoicingFrames;
- (double)_calculateRMSWithFrameData:(short)arg1;
- (void)_calculateSpeechVoicingLevel;
- (void)addDataToBuffer:(id)arg1;
- (id)audioBuffer;
- (unsigned long long)bestEarlyDetectSample;
- (unsigned long long)bestEndDetectSample;
- (unsigned long long)bestStartDetectSample;
- (void)calculateShadowMicScore;
- (id)init;
- (long long)numberOfTotalFramesETFT;
- (unsigned long long)numberOfVoicingFrames;
- (id)rmsSamplesForEntireAudio;
- (void)setAudioBuffer:(id)arg1;
- (void)setBestEarlyDetectSample:(unsigned long long)arg1;
- (void)setBestEndDetectSample:(unsigned long long)arg1;
- (void)setBestStartDetectSample:(unsigned long long)arg1;
- (void)setNumberOfTotalFramesETFT:(long long)arg1;
- (void)setNumberOfVoicingFrames:(unsigned long long)arg1;
- (void)setRmsSamplesForEntireAudio:(id)arg1;
- (void)setShadowMicScore:(double)arg1;
- (void)setSpeechVoiceLevel:(double)arg1;
- (double)shadowMicScore;
- (double)speechVoiceLevel;

@end
