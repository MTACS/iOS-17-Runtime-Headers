
@interface TextToSpeechVoiceBankingUI.VoiceRefreshViewModel : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _models;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _voices;
    void timer;
    void voiceBankingSession;
}

- (void)timerFired;

@end
