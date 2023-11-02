
@interface ATXHomeScreenLogUnlockSessionManagerSettingsWrapper : NSObject {
    bool  _appLibraryEnabled;
    bool  _hasAppPredictionPanel;
    bool  _hasAppPredictionPanelToday;
    bool  _hasSuggestionsWidget;
    bool  _hasSuggestionsWidgetToday;
    bool  _spotlightEnabled;
}

@property (nonatomic) bool appLibraryEnabled;
@property (nonatomic) bool hasAppPredictionPanel;
@property (nonatomic) bool hasAppPredictionPanelToday;
@property (nonatomic) bool hasSuggestionsWidget;
@property (nonatomic) bool hasSuggestionsWidgetToday;
@property (nonatomic) bool spotlightEnabled;

- (bool)appLibraryEnabled;
- (bool)hasAppPredictionPanel;
- (bool)hasAppPredictionPanelToday;
- (bool)hasSuggestionsWidget;
- (bool)hasSuggestionsWidgetToday;
- (void)setAppLibraryEnabled:(bool)arg1;
- (void)setHasAppPredictionPanel:(bool)arg1;
- (void)setHasAppPredictionPanelToday:(bool)arg1;
- (void)setHasSuggestionsWidget:(bool)arg1;
- (void)setHasSuggestionsWidgetToday:(bool)arg1;
- (void)setSpotlightEnabled:(bool)arg1;
- (bool)spotlightEnabled;

@end
