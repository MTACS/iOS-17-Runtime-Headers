
@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate> {
    <NMBUISyncInfoControllerDataSource> * _dataSource;
    NSUserDefaults * _greenTeaDefaults;
    bool  _isObservingSyncInfo;
    NMBUIPowerSourceInfo * _powerSourceInfo;
    NMSMediaSyncInfo * _syncInfo;
    NMSMediaSyncInfoUpdaterHeartbeat * _syncInfoUpdaterHeartbeat;
    unsigned long long  _target;
}

@property (nonatomic) <NMBUISyncInfoControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NMSMediaSyncInfo *syncInfo;
@property (nonatomic, readonly) unsigned long long target;

- (void).cxx_destruct;
- (id)_bundleIdentifierForTarget;
- (void)_handleMediaSyncInfoDidUpdateNotification:(id)arg1;
- (void)_handleMusicCellularDownloadsAllowedDidChangeNotification:(id)arg1;
- (bool)_musicCellularDownloadingAllowedOnWatch;
- (id)_musicSyncInfoMessageWithStatus:(unsigned long long)arg1 downloadPauseReason:(unsigned long long)arg2;
- (void)beginObservingSyncInfo;
- (id)dataSource;
- (unsigned long long)downloadStateForModelObject:(id)arg1;
- (void)endObservingSyncInfo;
- (id)initWithSyncInfoTarget:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)arg1;
- (float)progressForModelObject:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)syncInfo;
- (id)syncStatusDetailText;
- (unsigned long long)target;

@end
