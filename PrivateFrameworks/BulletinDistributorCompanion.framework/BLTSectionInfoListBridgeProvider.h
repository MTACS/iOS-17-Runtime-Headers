
@interface BLTSectionInfoListBridgeProvider : NSObject <BLTSectionInfoListOverrideProvider, LSApplicationWorkspaceObserverProtocol> {
    <BLTSectionInfoListProviderDelegate> * _delegate;
    NSDate * _lastKnownBridgeSettingsChangeDate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NPSDomainAccessor * _npsDomainAccessor;
    BLTSectionConfiguration * _sectionConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoListProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLTSectionConfiguration *sectionConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_companionSetupNotificationSettingsDictionaryForSectionInfo:(id)arg1 sectionID:(id)arg2;
- (id)_loadOverridesChangedSince:(id)arg1;
- (void)_reloadUpdatedOverrides;
- (void)_reloadUpdatedOverridesWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableCustomSettingsForWatchSectionID:(id)arg1;
- (id)initWithSectionConfiguration:(id)arg1;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)removeSectionWithSectionID:(id)arg1;
- (id)sectionConfiguration;
- (void)setCustomSettingsWithSectionInfo:(id)arg1;
- (void)setCustomSettingsWithSectionInfo:(id)arg1 watchSectionID:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNotificationsLevel:(int)arg1 sectionID:(id)arg2 forceCustom:(bool)arg3;
- (void)setSectionConfiguration:(id)arg1;

@end
