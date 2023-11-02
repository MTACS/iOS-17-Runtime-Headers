
@interface NMSMediaSettingsSynchronizer : NSObject {
    bool  _isObserving;
    NSUserDefaults * _mediaPlaybackCoreDefaults;
    NSUserDefaults * _mobileIPodDefaults;
    NSUserDefaults * _musicDefaults;
    NSUserDefaults * _nanoMusicSyncDefaults;
    NSUserDefaults * _podcastsDefaults;
}

+ (id)sharedSynchronizer;

- (void).cxx_destruct;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)_migrateMusicDefaultsIfNecessary;
- (id)_podcastsAppGroupPath;
- (id)_podcastsUserDefaults;
- (long long)_preferredGreenTeaMusicStreamingResolutionPreference;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)_syncPodcastDefaultsIfNecessary;
- (void)beginObservingUpdates;
- (void)dealloc;
- (void)endObservingUpdates;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
