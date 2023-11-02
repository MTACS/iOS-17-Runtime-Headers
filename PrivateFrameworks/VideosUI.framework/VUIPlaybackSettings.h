
@interface VUIPlaybackSettings : NSObject <ICEnvironmentMonitorObserver> {
    bool  _cellularDataDownloadEnabled;
    bool  _cellularDataPlaybackEnabled;
    long long  _networkStatus;
    bool  _preferAVAdapterCompatibility;
    int  _preferencesNotifyToken;
    bool  _preferencesNotifyTokenIsValid;
    NSArray * _preferredAudioDownloadLanguages;
    NSString * _preferredAudioLanguageCode;
    long long  _preferredCellularDownloadQuality;
    long long  _preferredCellularPlaybackQuality;
    NSArray * _preferredSubtitleDownloadLanguages;
    long long  _preferredWifiDownloadQuality;
    long long  _preferredWifiPlaybackQuality;
    bool  _useDefaultSubtitleDownloadLanguages;
}

@property (nonatomic) bool cellularDataDownloadEnabled;
@property (nonatomic) bool cellularDataPlaybackEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long networkStatus;
@property (nonatomic) bool preferAVAdapterCompatibility;
@property (nonatomic, retain) NSArray *preferredAudioDownloadLanguages;
@property (nonatomic, retain) NSString *preferredAudioLanguageCode;
@property (nonatomic) long long preferredCellularDownloadQuality;
@property (nonatomic) long long preferredCellularPlaybackQuality;
@property (nonatomic, readonly) long long preferredDownloadQualityForCurrentNetworkStatus;
@property (nonatomic, readonly) long long preferredPlaybackQualityForCurrentNetworkStatus;
@property (nonatomic, retain) NSArray *preferredSubtitleDownloadLanguages;
@property (nonatomic) long long preferredWifiDownloadQuality;
@property (nonatomic) long long preferredWifiPlaybackQuality;
@property (readonly) Class superclass;
@property (nonatomic) bool useDefaultSubtitleDownloadLanguages;

+ (id)sharedSettings;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_descriptionForExternalScreenType:(unsigned int)arg1;
- (long long)_downloadQualityForString:(id)arg1;
- (void)_externalScreenTypeDidChange:(id)arg1;
- (long long)_playbackQualityForString:(id)arg1 forCellular:(bool)arg2;
- (void)_registerObserverForUserPrefsChange;
- (void)_sceneWillConnect:(id)arg1;
- (void)_updateNetworkStatus;
- (void)_updatePropertiesFromUserPrefs;
- (bool)cellularDataDownloadEnabled;
- (bool)cellularDataPlaybackEnabled;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)init;
- (long long)networkStatus;
- (bool)preferAVAdapterCompatibility;
- (id)preferredAudioDownloadLanguages;
- (id)preferredAudioLanguageCode;
- (long long)preferredCellularDownloadQuality;
- (long long)preferredCellularPlaybackQuality;
- (long long)preferredDownloadQualityForCurrentNetworkStatus;
- (long long)preferredPlaybackQualityForCurrentNetworkStatus;
- (id)preferredSubtitleDownloadLanguages;
- (long long)preferredWifiDownloadQuality;
- (long long)preferredWifiPlaybackQuality;
- (void)setCellularDataDownloadEnabled:(bool)arg1;
- (void)setCellularDataPlaybackEnabled:(bool)arg1;
- (void)setNetworkStatus:(long long)arg1;
- (void)setPreferAVAdapterCompatibility:(bool)arg1;
- (void)setPreferredAudioDownloadLanguages:(id)arg1;
- (void)setPreferredAudioLanguageCode:(id)arg1;
- (void)setPreferredCellularDownloadQuality:(long long)arg1;
- (void)setPreferredCellularPlaybackQuality:(long long)arg1;
- (void)setPreferredSubtitleDownloadLanguages:(id)arg1;
- (void)setPreferredWifiDownloadQuality:(long long)arg1;
- (void)setPreferredWifiPlaybackQuality:(long long)arg1;
- (void)setUseDefaultSubtitleDownloadLanguages:(bool)arg1;
- (void)updateSupplementaryAvailableAudioLanguageCodes:(id)arg1;
- (bool)useDefaultSubtitleDownloadLanguages;

@end
