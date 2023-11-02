
@interface TextToSpeechVoiceBankingUI.VoiceBankingAudioServiceViewModel : NSObject <AVAudioPlayerDelegate, AVSpeechSynthesizerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _audioButtonState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _inputSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isInputAvailable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isRecording;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isRecordingRequestInFlight;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _operationError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _playingRecording;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _recordingMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _recordingResult;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _recordingState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _synthesizer;
    void audioService;
    void cancellables;
    void player;
    void speechRecognitionDelayTimer;
    void voiceBankingSession;
}

- (void).cxx_destruct;
- (void)applicationDidResign;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)init;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;

@end
