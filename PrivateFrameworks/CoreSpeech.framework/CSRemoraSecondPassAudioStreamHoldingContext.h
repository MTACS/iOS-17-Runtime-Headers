
@interface CSRemoraSecondPassAudioStreamHoldingContext : NSObject {
    CSAudioProvider * _audioProvider;
    CSAudioStreamHolding * _audioStreamHolding;
}

@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStreamHolding *audioStreamHolding;

- (void).cxx_destruct;
- (id)audioProvider;
- (id)audioStreamHolding;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStreamHolding:(id)arg1;

@end
