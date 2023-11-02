
@interface WFAudioRecorder : NSObject <AVAudioRecorderDelegate> {
    <WFAudioRecorderDelegate> * _delegate;
    bool  _hasFinished;
    long long  _outputFormat;
    NSURL * _outputURL;
    bool  _paused;
    AVAudioRecorder * _recorder;
    double  _recordingDuration;
    NSTimer * _updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAudioRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFinished;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long outputFormat;
@property (nonatomic, retain) NSURL *outputURL;
@property (nonatomic) bool paused;
@property (nonatomic, retain) AVAudioRecorder *recorder;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic) double recordingDuration;
@property (nonatomic) bool runningUpdateTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *updateTimer;

+ (id)formattedStringWithDuration:(double)arg1 elapsedTime:(double)arg2;

- (void).cxx_destruct;
- (void)audioInterruption:(id)arg1;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(bool)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)countdownFire:(id)arg1;
- (id)delegate;
- (void)finishRecording;
- (bool)hasFinished;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;
- (bool)isRecording;
- (long long)outputFormat;
- (id)outputURL;
- (void)pauseRecording;
- (bool)paused;
- (void)recordForDuration:(double)arg1;
- (id)recorder;
- (double)recordingDuration;
- (void)resumeRecording;
- (bool)runningUpdateTimer;
- (void)setDelegate:(id)arg1;
- (void)setHasFinished:(bool)arg1;
- (void)setOutputFormat:(long long)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRecorder:(id)arg1;
- (void)setRecordingDuration:(double)arg1;
- (void)setRunningUpdateTimer:(bool)arg1;
- (void)setUpdateTimer:(id)arg1;
- (void)startRecording;
- (id)updateTimer;

@end
