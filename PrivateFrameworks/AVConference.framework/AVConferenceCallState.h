
@interface AVConferenceCallState : NSObject {
    bool  _audioIsPaused;
    VCCapabilities * _capabilities;
    bool  _isAudioSending;
    bool  _isVideoPaused;
}

@property (getter=isAudioPaused, nonatomic) bool audioIsPaused;
@property (nonatomic, retain) VCCapabilities *capabilities;
@property (getter=isAudioSending, nonatomic) bool isAudioSending;
@property (getter=isVideoPaused, nonatomic) bool isVideoPaused;

- (id)capabilities;
- (void)dealloc;
- (bool)isAudioPaused;
- (bool)isAudioSending;
- (bool)isVideoPaused;
- (void)setAudioIsPaused:(bool)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setIsAudioSending:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;

@end
