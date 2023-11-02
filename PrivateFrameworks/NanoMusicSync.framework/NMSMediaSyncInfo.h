
@interface NMSMediaSyncInfo : NSObject {
    NSDictionary * _info;
    int  _notifyToken;
    unsigned long long  _target;
}

@property (nonatomic, retain) NSDictionary *info;
@property (nonatomic, readonly) unsigned long long target;
@property (getter=_isValid, nonatomic, readonly) bool valid;

+ (id)_mediaSyncInfoDirectory;

- (void).cxx_destruct;
- (bool)_hasItemsForContainer:(id)arg1;
- (id)_identifiersWithKeepLocalStates:(id)arg1 modelKind:(id)arg2;
- (id)_initWithTarget:(unsigned long long)arg1 readAndObserveChanges:(bool)arg2;
- (bool)_isValid;
- (id)_notificationName;
- (id)_preferencesApplicationID;
- (id)_preferencesInfoKey;
- (void)_readInfo;
- (void)_registerForInfoChanged;
- (id)_syncInfoFilePath;
- (id)_syncInfoModelKindForMPModelKind:(id)arg1;
- (id)_targetIdentifier;
- (id)allAlbums;
- (id)allPlaylists;
- (id)containers;
- (void)dealloc;
- (unsigned long long)downloadPauseReason;
- (unsigned long long)downloadPauseReasonForContainer:(id)arg1;
- (unsigned long long)downloadPauseReasonForItem:(id)arg1;
- (bool)hasContainer:(id)arg1;
- (bool)hasDownloadableItemsWithinStorageLimitForContainer:(id)arg1;
- (bool)hasItem:(id)arg1;
- (bool)hasItemsOverStorageLimit;
- (bool)hasItemsOverStorageLimitForContainer:(id)arg1;
- (bool)hasItemsWaitingWithoutPauseReason;
- (bool)hasItemsWaitingWithoutPauseReasonForContainer:(id)arg1;
- (id)info;
- (id)initWithTarget:(unsigned long long)arg1;
- (bool)isItemOverStorageLimit:(id)arg1;
- (unsigned long long)itemCount;
- (id)itemsForContainer:(id)arg1;
- (id)keepLocalEnabledAlbums;
- (id)keepLocalEnabledPlaylists;
- (unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)arg1;
- (unsigned long long)playabilityForContainer:(id)arg1;
- (float)progress;
- (float)progressForContainer:(id)arg1;
- (float)progressForItem:(id)arg1;
- (void)setInfo:(id)arg1;
- (unsigned long long)status;
- (unsigned long long)statusForContainer:(id)arg1;
- (unsigned long long)statusForItem:(id)arg1;
- (unsigned long long)target;
- (id)userInfoForContainer:(id)arg1;
- (id)userInfoForItem:(id)arg1;

@end
