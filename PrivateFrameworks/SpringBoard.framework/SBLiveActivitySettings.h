
@interface SBLiveActivitySettings : PTSettings {
    bool  _allowAlertsOnHostApp;
    SBAmbientLiveActivitiesSettings * _ambientSettings;
    bool  _disableActivityAlertsAsBanners;
    bool  _hideActivitiesInAmbient;
    bool  _hideActivitiesInDynamicIsland;
    bool  _hideActivitiesInLockScreen;
}

@property (nonatomic) bool allowAlertsOnHostApp;
@property (nonatomic, retain) SBAmbientLiveActivitiesSettings *ambientSettings;
@property (nonatomic) bool disableActivityAlertsAsBanners;
@property (nonatomic) bool hideActivitiesInAmbient;
@property (nonatomic) bool hideActivitiesInDynamicIsland;
@property (nonatomic) bool hideActivitiesInLockScreen;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)allowAlertsOnHostApp;
- (id)ambientSettings;
- (bool)disableActivityAlertsAsBanners;
- (bool)hideActivitiesInAmbient;
- (bool)hideActivitiesInDynamicIsland;
- (bool)hideActivitiesInLockScreen;
- (void)setAllowAlertsOnHostApp:(bool)arg1;
- (void)setAmbientSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setDisableActivityAlertsAsBanners:(bool)arg1;
- (void)setHideActivitiesInAmbient:(bool)arg1;
- (void)setHideActivitiesInDynamicIsland:(bool)arg1;
- (void)setHideActivitiesInLockScreen:(bool)arg1;

@end
