
@interface PUSlideshowSettingsViewModelChange : PUViewModelChange {
    bool  _mediaItemDidChange;
    bool  _musicOnDidChange;
    bool  _presetDidChange;
    bool  _shouldRepeatDidChange;
    bool  _stepDurationDidChange;
}

@property (setter=_setMediaItemDidChange:, nonatomic) bool mediaItemDidChange;
@property (setter=_setMusicOnDidChange:, nonatomic) bool musicOnDidChange;
@property (setter=_setPresetDidChange:, nonatomic) bool presetDidChange;
@property (setter=_setRepeatDidChange:, nonatomic) bool shouldRepeatDidChange;
@property (setter=_setStepDurationDidChange:, nonatomic) bool stepDurationDidChange;

- (void)_setMediaItemDidChange:(bool)arg1;
- (void)_setMusicOnDidChange:(bool)arg1;
- (void)_setPresetDidChange:(bool)arg1;
- (void)_setRepeatDidChange:(bool)arg1;
- (void)_setStepDurationDidChange:(bool)arg1;
- (bool)hasChanges;
- (bool)mediaItemDidChange;
- (bool)musicOnDidChange;
- (bool)presetDidChange;
- (bool)shouldRepeatDidChange;
- (bool)stepDurationDidChange;

@end
