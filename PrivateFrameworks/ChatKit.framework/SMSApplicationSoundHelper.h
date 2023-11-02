
@interface SMSApplicationSoundHelper : NSObject {
    TLAlert * _alert;
    bool  _bulletinSuppressed;
}

@property (nonatomic, retain) TLAlert *alert;
@property (nonatomic) bool bulletinSuppressed;

- (void).cxx_destruct;
- (void)_executeOnMainThread:(id /* block */)arg1;
- (bool)_isPlaySoundEnabled;
- (void)_playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(bool)arg2;
- (bool)_shouldPlayTapbackSound;
- (id)alert;
- (bool)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg1;
- (bool)bulletinSuppressed;
- (void)playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(bool)arg2;
- (void)playSendSoundForMessage:(id)arg1;
- (bool)playTapbackReceivedSoundForMessageInCurrentTranscript:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setBulletinSuppressed:(bool)arg1;
- (void)stopPlayingAlert;

@end
