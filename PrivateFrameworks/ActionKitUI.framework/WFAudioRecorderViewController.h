
@interface WFAudioRecorderViewController : WFAudioInputViewController <WFAudioRecorderDelegate> {
    WFAudioRecorder * _audioRecorder;
    id /* block */  _completionHandler;
    UIButton * _inputButton;
    bool  _isFinishing;
    double  _recordingDuration;
    bool  _startImmediately;
}

@property (nonatomic, retain) WFAudioRecorder *audioRecorder;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIButton *inputButton;
@property (nonatomic) bool isFinishing;
@property (nonatomic) double recordingDuration;
@property (nonatomic) bool startImmediately;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioRecorder;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
- (id /* block */)completionHandler;
- (void)finishRecording;
- (void)handleTap;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;
- (id)inputButton;
- (void)inputButtonTapped;
- (bool)isFinishing;
- (double)recordingDuration;
- (void)setAudioRecorder:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setInputButton:(id)arg1;
- (void)setIsFinishing:(bool)arg1;
- (void)setRecordingDuration:(double)arg1;
- (void)setStartImmediately:(bool)arg1;
- (bool)startImmediately;
- (void)startRecording;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
