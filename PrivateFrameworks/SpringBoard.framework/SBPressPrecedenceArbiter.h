
@interface SBPressPrecedenceArbiter : NSObject <SBAVSystemControllerCacheObserver> {
    NSArray * _hardwareButtons;
    long long  _homeButtonType;
    bool  _isAudioPlayingSomewhere;
    unsigned long long  _volumeAndLockButtonPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *hardwareButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyButtonPriority:(unsigned long long)arg1;
- (unsigned long long)_currentButtonPriority;
- (bool)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (void)_updateButtonPrioritiesForNotification:(id)arg1;
- (void)_updateButtonPriority;
- (void)cache:(id)arg1 didUpdateAudioSessionPlaying:(bool)arg2;
- (id)hardwareButtons;
- (id)initWithHomeButtonType:(long long)arg1;
- (void)setHardwareButtons:(id)arg1;

@end
