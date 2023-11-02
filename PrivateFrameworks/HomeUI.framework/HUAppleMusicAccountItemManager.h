
@interface HUAppleMusicAccountItemManager : HFItemManager {
    HUAppleMusicAccountModule * _appleMusicAccountModule;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HUPrimaryUserSettingsItemModule * _primaryUserSettingsItemModule;
    bool  _shouldDisableUpdates;
}

@property (nonatomic, retain) HUAppleMusicAccountModule *appleMusicAccountModule;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) HUPrimaryUserSettingsItemModule *primaryUserSettingsItemModule;
@property (nonatomic) bool shouldDisableUpdates;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (bool)_showAppleMusicSettings;
- (bool)_showPrimaryUserSettings;
- (id)appleMusicAccountModule;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;
- (id)mediaProfileContainer;
- (id)primaryUserSettingsItemModule;
- (void)setAppleMusicAccountModule:(id)arg1;
- (void)setPrimaryUserSettingsItemModule:(id)arg1;
- (void)setShouldDisableUpdates:(bool)arg1;
- (bool)shouldDisableUpdates;

@end
