
@interface WBSOfflineSearchSuggestionsModelUpdateManager : NSObject {
    NSDateFormatter * _dateFormatter;
    bool  _googleIsADefaultSearchProvider;
    bool  _googleWasADefaultSearchProvider;
    NSString * _lastUsedLocaleIdentifier;
    bool  _offlineSuggestionsRemotelyDisabled;
}

- (void).cxx_destruct;
- (void)_checkForModelUpdates;
- (void)_clearModels;
- (void)_disconnectFromSearchHelper;
- (void)_doUpdates;
- (void)_localeChanged:(id)arg1;
- (void)_recordUpdateResultWithError:(id)arg1;
- (void)_searchEngineChangedToOrFromGoogle:(id)arg1;
- (id)_searchHelperProxy;
- (bool)_shouldCheckForModelUpdates;
- (double)_timeIntervalSinceLastUpdate;
- (void)_updateDefaultSearchEnginePreferencesState;
- (void)checkForModelUpdatesOrRemoteDisablementIfNeeded;
- (void)dealloc;
- (id)init;

@end
