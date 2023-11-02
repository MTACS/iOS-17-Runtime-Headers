
@interface QLHapticItemViewController : QLAudioItemViewController <UIGestureRecognizerDelegate> {
    double  _elapsedTime;
    bool  _hasAudioCustom;
    UILabel * _missingAudioCustomLabel;
    AVPlayerItem * _playerItem;
    double  _remainingTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasAudioCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_assetIsDecodable:(id)arg1;
- (void)_setupMissingAudioCustomLabel;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (bool)canPlayHaptics;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferFromAHAP:(id)arg1 error:(id*)arg2;
- (double)elapsedTime;
- (id)filterPatternDictionary:(id)arg1;
- (bool)hasAudioCustom;
- (id)iconImageWithConfiguration:(id)arg1;
- (id)imageAccessibilityIdentifer;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)makeAVAssetFromAHAP:(id)arg1 error:(id*)arg2;
- (bool)play;
- (id /* block */)playbackObserverBlock;
- (long long)playbackTimeFormat;
- (id)player;
- (id)playerItem;
- (float)playerTimeObservationInterval;
- (double)remainingTime;
- (void)setHasAudioCustom:(bool)arg1;
- (void)setupConstraints;
- (void)showTimeLabelIfNeeded;
- (id)stringFromTimeInterval:(double)arg1;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (bool)usesScrubber;
- (void)viewDidLoad;

@end
