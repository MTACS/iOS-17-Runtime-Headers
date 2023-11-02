
@interface AXSpeechSettingsModelController : NSObject <TTSAXResourceManagerObserver> {
    AXAssetsService * _assetsService;
    AVAudioPlayer * _audioPlayer;
    AVAudioSession * _audioSessionForSamplePlayback;
    NSMutableDictionary * _downloadProgessByVoiceID;
    id /* block */  _downloadProgressForVoiceIdCallback;
    id /* block */  _finishedDeletingResourceCallback;
    id /* block */  _finishedDownloadingResourceCallback;
    id /* block */  _resourceCacheDidReceiveUpdateCallback;
    id /* block */  _selectedVoiceDidUpdateCallback;
    AVSpeechSynthesizer * _speechSynthesizer;
    NSMutableDictionary * _stoppedVoiceIds;
}

@property (nonatomic, retain) AXAssetsService *assetsService;
@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (nonatomic, retain) AVAudioSession *audioSessionForSamplePlayback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *downloadProgessByVoiceID;
@property (nonatomic, copy) id /* block */ downloadProgressForVoiceIdCallback;
@property (nonatomic, copy) id /* block */ finishedDeletingResourceCallback;
@property (nonatomic, copy) id /* block */ finishedDownloadingResourceCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resourceCacheDidReceiveUpdateCallback;
@property (nonatomic, copy) id /* block */ selectedVoiceDidUpdateCallback;
@property (nonatomic, retain) AVSpeechSynthesizer *speechSynthesizer;
@property (nonatomic, retain) NSMutableDictionary *stoppedVoiceIds;
@property (readonly) Class superclass;

+ (void)partitionVoiceFootprints:(id)arg1 intoStandardVoices:(id)arg2 andNoveltyVoices:(id)arg3;
+ (void)partitionVoiceFootprints:(id)arg1 intoStandardVoices:(id)arg2 noveltyVoices:(id)arg3 personalVoices:(id)arg4;

- (void).cxx_destruct;
- (void)addVoiceFootprintsToArray:(id)arg1 dialect:(id)arg2 selectedVoiceId:(id)arg3 showSiriNeuralVoices:(bool)arg4 showNeuralAXVoices:(bool)arg5;
- (bool)allowedToDownload;
- (id)assetsService;
- (id)audioPlayer;
- (id)audioSessionForSamplePlayback;
- (void)dealloc;
- (void)deleteResource:(id)arg1;
- (id)downloadProgessByVoiceID;
- (void)downloadProgressForVoiceId:(id)arg1 progress:(float)arg2 storageSize:(long long)arg3 requiredDiskSpace:(bool)arg4;
- (id /* block */)downloadProgressForVoiceIdCallback;
- (void)finishedDeletingResource:(id)arg1;
- (id /* block */)finishedDeletingResourceCallback;
- (void)finishedDownloadingResource:(id)arg1 wasCancelled:(bool)arg2;
- (id /* block */)finishedDownloadingResourceCallback;
- (id)getAllResources;
- (bool)hasAnyUserDeletableResources:(id)arg1;
- (id)init;
- (bool)isResourceUserDeletable:(id)arg1;
- (void)playSampleForResource:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshAssetCatalog:(bool)arg1 downloadSamplesIfNeeded:(bool)arg2 restartMigrationIfNeeded:(bool)arg3;
- (void)resetResourcesCache;
- (void)resourceCacheDidReceiveUpdate;
- (id /* block */)resourceCacheDidReceiveUpdateCallback;
- (id)resourceWithVoiceId:(id)arg1;
- (id /* block */)selectedVoiceDidUpdateCallback;
- (id)selectedVoiceIdentifierForSpeechSourceKey:(id)arg1;
- (id)selectedVoiceIdentifierForSpeechSourceKey:(id)arg1 languageCode:(id)arg2;
- (void)setAssetsService:(id)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void)setAudioSessionForSamplePlayback:(id)arg1;
- (void)setDownloadProgessByVoiceID:(id)arg1;
- (void)setDownloadProgressForVoiceIdCallback:(id /* block */)arg1;
- (void)setFinishedDeletingResourceCallback:(id /* block */)arg1;
- (void)setFinishedDownloadingResourceCallback:(id /* block */)arg1;
- (void)setResourceCacheDidReceiveUpdateCallback:(id /* block */)arg1;
- (void)setSelectedVoiceDidUpdateCallback:(id /* block */)arg1;
- (void)setSpeechSynthesizer:(id)arg1;
- (void)setStoppedVoiceIds:(id)arg1;
- (id)speechSynthesizer;
- (void)startDownloadForResource:(id)arg1;
- (void)stopDownloadForResource:(id)arg1;
- (id)stoppedVoiceIds;
- (void)updateDownloadProgressFromNPS:(id)arg1;
- (void)updateSelectedVoiceIdentifier:(id)arg1 forSpeechSourceKey:(id)arg2;
- (void)updateSelectedVoiceIdentifier:(id)arg1 forSpeechSourceKey:(id)arg2 languageCode:(id)arg3;
- (id)voiceIdentifierForLiveSpeechKeyboardID:(id)arg1;

@end
