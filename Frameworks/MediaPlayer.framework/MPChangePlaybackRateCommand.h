
@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float  _preferredRate;
    NSArray * _supportedPlaybackRates;
}

@property (nonatomic, copy) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPlaybackRate:(float)arg1;
- (float)preferredRate;
- (void)setPreferredRate:(float)arg1;
- (void)setSupportedPlaybackRates:(id)arg1;
- (id)supportedPlaybackRates;

@end
