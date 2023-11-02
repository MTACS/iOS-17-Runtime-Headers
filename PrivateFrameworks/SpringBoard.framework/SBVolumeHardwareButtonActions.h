
@interface SBVolumeHardwareButtonActions : NSObject {
    bool  _volumeDecreaseIsDown;
    id /* block */  _volumeDecreaseUpEventBlock;
    bool  _volumeIncreaseIsDown;
    id /* block */  _volumeIncreaseUpEventBlock;
    NSHashTable * _volumePressBandits;
}

- (void).cxx_destruct;
- (bool)_handleVolumeButtonDownForIncrease:(bool)arg1 modifiers:(long long)arg2;
- (bool)_handleVolumeButtonUpForIncrease:(bool)arg1;
- (bool)_handleVolumeDecreaseUp;
- (bool)_handleVolumeIncreaseUp;
- (void)_launchVolumeSettings;
- (void)_sendBanditsVolumeDecreased;
- (void)_sendBanditsVolumeIncreased;
- (id)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(bool)arg1;
- (id)_sendVolumeButtonDownToOverridingSceneForIncrease:(bool)arg1;
- (id)_sendVolumeButtonDownToSBUIControllerForIncrease:(bool)arg1;
- (id)_sendVolumeButtonDownToSoundControllerForIncrease:(bool)arg1;
- (id)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(bool)arg1;
- (bool)_sendVolumeButtonToSBUIControllerForIncrease:(bool)arg1 down:(bool)arg2;
- (void)addVolumePressBandit:(id)arg1;
- (void)cancelVolumePress;
- (void)removeVolumePressBandit:(id)arg1;
- (void)volumeDecreasePressDownWithModifiers:(long long)arg1;
- (void)volumeDecreasePressUp;
- (void)volumeIncreasePressDownWithModifiers:(long long)arg1;
- (void)volumeIncreasePressUp;

@end
