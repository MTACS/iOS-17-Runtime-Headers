
@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate> {
    <BLTSectionInfoListDelegate> * _delegate;
    bool  _loaded;
    bool  _loading;
    NSMutableArray * _loadingCompletionHandlers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    <BLTSectionInfoListOverrideProvider> * _overrideProvider;
    NSMutableDictionary * _sectionInfoListItemsBySectionID;
    <BLTSectionInfoListBBProvider> * _sectionInfoProvider;
    NSMutableSet * _sectionInfoSectionIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=hasLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, retain) <BLTSectionInfoListOverrideProvider> *overrideProvider;
@property (nonatomic, retain) <BLTSectionInfoListBBProvider> *sectionInfoProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_sectionInfoFromListItem:(id)arg1 sectionID:(id)arg2 displayName:(id*)arg3;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1 sectionID:(id)arg2;
- (id)_overriddenSectionInfoForSectionID:(id)arg1 originalSectionInfo:(id*)arg2 displayName:(id*)arg3;
- (id)_sectionInfoFromSectionID:(id)arg1 displayName:(id*)arg2;
- (void)_updateListItem:(id)arg1 overrides:(id)arg2 sectionID:(id)arg3;
- (id)bbSectionInfoForSectionID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (bool)hasCustomSettingsSetForSectionID:(id)arg1;
- (bool)hasLoaded;
- (id)init;
- (void)mapSection:(id)arg1 map:(id)arg2;
- (id)originalSettings;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (id)overriddenSettings;
- (id)overrideProvider;
- (id)overrides;
- (void)reloadBBSection:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)removedSectionWithSectionID:(id)arg1 transaction:(id)arg2;
- (id)sectionIDs;
- (id)sectionInfoProvider;
- (id)sectionOverrideOnlyForSectionID:(id)arg1;
- (id)sectionOverridesOnly;
- (void)setDelegate:(id)arg1;
- (void)setOverrideProvider:(id)arg1;
- (void)setSectionInfoProvider:(id)arg1;
- (id)settingsDescriptionForSectionIDs:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2 transaction:(id)arg3;
- (void)updateSectionInfoForSectionIDs:(id)arg1 transaction:(id)arg2;

@end
