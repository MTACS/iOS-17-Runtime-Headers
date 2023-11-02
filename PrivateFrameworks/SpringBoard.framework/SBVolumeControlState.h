
@interface SBVolumeControlState : NSObject <NSCopying> {
    NSString * _activeVolumeCategoryName;
    bool  _currentRouteHasVolumeControl;
    bool  _isAudioPlayingSomewhere;
    bool  _isCallOrFaceTimeActive;
    bool  _isFullyMuted;
    bool  _isHostingAppOnLockScreen;
    bool  _isLocked;
    bool  _isRingerMuted;
    bool  _isShowingLockScreenMediaControls;
}

@property (nonatomic, copy) NSString *activeVolumeCategoryName;
@property (setter=setCurrentRouteHasVolumeControl:, nonatomic) bool currentRouteHasVolumeControl;
@property (setter=setAudioPlayingSomewhere:, nonatomic) bool isAudioPlayingSomewhere;
@property (setter=setCallOrFaceTimeActive:, nonatomic) bool isCallOrFaceTimeActive;
@property (setter=setFullyMuted:, nonatomic) bool isFullyMuted;
@property (setter=setHostingAppOnLockScreen:, nonatomic) bool isHostingAppOnLockScreen;
@property (setter=setLocked:, nonatomic) bool isLocked;
@property (setter=setRingerMuted:, nonatomic) bool isRingerMuted;
@property (setter=setShowingLockScreenMediaControls:, nonatomic) bool isShowingLockScreenMediaControls;

- (void).cxx_destruct;
- (id)activeVolumeCategoryName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentRouteHasVolumeControl;
- (id)description;
- (bool)isAudioPlayingSomewhere;
- (bool)isCallOrFaceTimeActive;
- (bool)isFullyMuted;
- (bool)isHostingAppOnLockScreen;
- (bool)isLocked;
- (bool)isRingerMuted;
- (bool)isShowingLockScreenMediaControls;
- (void)setActiveVolumeCategoryName:(id)arg1;
- (void)setAudioPlayingSomewhere:(bool)arg1;
- (void)setCallOrFaceTimeActive:(bool)arg1;
- (void)setCurrentRouteHasVolumeControl:(bool)arg1;
- (void)setFullyMuted:(bool)arg1;
- (void)setHostingAppOnLockScreen:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setRingerMuted:(bool)arg1;
- (void)setShowingLockScreenMediaControls:(bool)arg1;

@end
