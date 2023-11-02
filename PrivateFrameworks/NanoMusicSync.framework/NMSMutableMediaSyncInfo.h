
@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    bool  _needsUpdateAggregateInfo;
}

@property (nonatomic, retain) NSMutableDictionary *info;

+ (id)requiredUserInfoPropertiesForModelKind:(id)arg1;

- (id)_info;
- (id)_infoForContainer:(id)arg1;
- (id)_infoForItem:(id)arg1;
- (void)_notifyInfoChanged;
- (unsigned long long)_persistingOptions;
- (void)_updateAggregateInfoIfNeeded;
- (void)_writeInfo;
- (unsigned long long)downloadPauseReason;
- (unsigned long long)downloadPauseReasonForContainer:(id)arg1;
- (bool)hasItemsOverStorageLimit;
- (bool)hasItemsOverStorageLimitForContainer:(id)arg1;
- (bool)hasItemsWaitingWithoutPauseReason;
- (id)initWithTarget:(unsigned long long)arg1;
- (unsigned long long)playabilityForContainer:(id)arg1;
- (float)progress;
- (float)progressForContainer:(id)arg1;
- (void)setDownloadPauseReason:(unsigned long long)arg1 forItem:(id)arg2;
- (void)setItems:(id)arg1 forContainer:(id)arg2;
- (void)setOverStorageLimit:(bool)arg1 forItem:(id)arg2;
- (void)setOverStorageLimitBehavior:(unsigned long long)arg1 forContainer:(id)arg2;
- (void)setProgressBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 forItem:(id)arg3;
- (void)setStatus:(unsigned long long)arg1 forItem:(id)arg2;
- (void)setUserInfo:(id)arg1 forContainer:(id)arg2;
- (void)setUserInfo:(id)arg1 forItem:(id)arg2;
- (void)setUserInfoForModelObject:(id)arg1 manuallyPinned:(bool)arg2;
- (unsigned long long)status;
- (unsigned long long)statusForContainer:(id)arg1;
- (void)synchronize;

@end
